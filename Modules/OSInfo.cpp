#include "OSInfo.hpp"

OSInfo::OSInfo(){
	_tick_rate = 0;
	_name = "OS Info";
	uname(&_info);
}

OSInfo::~OSInfo(){}

std::vector<std::string> OSInfo::getInfo(){
	std::vector<std::string> list;
	list.push_back(_info.domainname);
	list.push_back(_info.machine);
	list.push_back(_info.nodename);
	list.push_back(_info.release);
	list.push_back(_info.sysname);
	list.push_back(_info.version);
	return list;
}
