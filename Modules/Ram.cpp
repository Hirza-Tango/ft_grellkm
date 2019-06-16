#include "Ram.hpp"
#include <sys/sysctl.h>

Ram::Ram(){
	_tick_rate = 1;
	_name = "Ram Info";
	//TODO: libs
}

Ram::~Ram(){}

std::vector<std::string> Ram::getInfo(){
	std::vector<std::string> list;
	list.push_back("");
	return list;
}
