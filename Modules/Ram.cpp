#include "Ram.hpp"
#include <sys/sysctl.h>
#include <sstream>
#include <mach/mach_host.h>


Ram::Ram(){
	_tick_rate = 1;
	_name = "Ram Info";
	int mib[2] = {CTL_HW, HW_MEMSIZE};
	size_t size = sizeof(_mem);
	sysctl(mib, 2, &_mem, &size, NULL, 0);
	mib[1] = HW_PAGESIZE;
	size = sizeof(_page_size);
	sysctl(mib, 2, &_page_size, &size, NULL, 0);
	std::stringstream mem_string;
	mem_string << _mem;
	_info.push_back(mem_string.str() + " bytes");
}

Ram::~Ram(){}

float Ram::getPercent(){
	mach_msg_type_number_t count = HOST_VM_INFO_COUNT;
	vm_statistics_data_t vmstat;
	host_statistics(
		mach_host_self(),
		HOST_VM_INFO,
		reinterpret_cast<host_info_t>(&vmstat),
		&count
	);
	return (vmstat.active_count + vmstat.inactive_count + vmstat.wire_count) * _page_size;
}
