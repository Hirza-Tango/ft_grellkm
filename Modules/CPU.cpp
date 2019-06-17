#include "CPU.hpp"
#include <sys/sysctl.h>
#include <sstream>
#include <mach/processor_info.h>
#include <mach/mach_host.h>

CPU::CPU(){
	_tick_rate = 1;
	_name = "CPU Info";
	int mib[2] = {CTL_HW, HW_MODEL};
	char buffer[1024];
	size_t len = 1024;
	sysctl(mib, 2, &buffer, &len, NULL, 0);
	_info.push_back(buffer);
	int cores;
	len=sizeof(cores);
	mib[1] = HW_NCPU;
	sysctl(mib,2, &cores, &len, NULL, 0);
	//convert int to string
	std::stringstream cores_string;
	cores_string << cores;
	_info.push_back(cores_string.str());
}

CPU::~CPU(){}


float CPU::getPercent(){
	//TODO: this
	unsigned int cores;
	processor_cpu_load_info_t load;
	float used = 0;
	float total = 0;
	host_processor_info(
		mach_host_self(),
		PROCESSOR_CPU_LOAD_INFO,
		&cores,
		reinterpret_cast<processor_info_array_t *>(&load),
		NULL
	);
	for (size_t i = 0; i < cores; i++){
		used += load[i].cpu_ticks[CPU_STATE_NICE];
		used += load[i].cpu_ticks[CPU_STATE_SYSTEM];
		used += load[i].cpu_ticks[CPU_STATE_USER];
		total += used;
		total += load[i].cpu_ticks[CPU_STATE_IDLE];
	}
	return used/total;
}
