#include "OSInfo.hpp"
#include <sys/utsname.h>

OSInfo::OSInfo(){
	_tick_rate = 0;
	_name = "OS Info";
	struct utsname uname_info;
	uname(&uname_info);
	_info.push_back(uname_info.sysname);
	_info.push_back(uname_info.nodename);
	_info.push_back(uname_info.machine);
	_info.push_back(uname_info.version);
	_info.push_back(uname_info.release);
}

OSInfo::~OSInfo(){}

float OSInfo::getPercent(){
	return -1;
}
