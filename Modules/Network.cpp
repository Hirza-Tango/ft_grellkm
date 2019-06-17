#include "Network.hpp"
#include <sys/sysctl.h>

Network::Network(){
	_tick_rate = 1;
	_name = "Network Info";
	//dynamically scale on max this session
	_max_bandwidth = 0;
	//TODO: libs
}

Network::~Network(){}

float Network::getPercent(){
	//TODO:this;
}
