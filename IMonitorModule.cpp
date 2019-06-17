#include "IMonitorModule.hpp"

std::string IMonitorModule::getName(){
	return _name;
}

std::vector<std::string> IMonitorModule::getInfo(){
	return _info;
}
