#include "CPU.hpp"
#include <sys/sysctl.h>

CPU::CPU(){
	_tick_rate = 1;
	_name = "CPU Info";
	//TODO: libs
}

CPU::~CPU(){}

std::vector<std::string> CPU::getInfo(){
	std::vector<std::string> list;
	list.push_back("");
	return list;
}
