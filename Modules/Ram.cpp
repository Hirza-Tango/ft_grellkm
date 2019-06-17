#include "Ram.hpp"
#include <sys/sysctl.h>
#include <sstream>

Ram::Ram(){
	_tick_rate = 1;
	_name = "Ram Info";
	int mib[2] = {CTL_HW, HW_MEMSIZE};
	size_t size = sizeof(_mem);
	sysctl(mib, 2, &_mem, &size, NULL, 0);
	std::stringstream mem_string;
	mem_string << _mem;
	_info.push_back(mem_string.str() + " bytes");
}

Ram::~Ram(){}

float Ram::getPercent(){
	//TODO: this;
}
