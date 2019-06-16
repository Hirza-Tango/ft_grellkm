#include "Network.hpp"
#include <sys/sysctl.h>

Network::Network(){
	_tick_rate = 1;
	_name = "Network Info";
	//TODO: libs
}

Network::~Network(){}

std::vector<std::string> Network::getInfo(){
	std::vector<std::string> list;
	list.push_back("");
	return list;
}
