#include "DateTime.hpp"
#include <ctime>

DateTime::DateTime(){
	_tick_rate = 1;
	_name = "DateTime";
	_dateTime = time(NULL);
}

DateTime::~DateTime(){}

std::vector<std::string> DateTime::getInfo(){
	std::vector<std::string> list;
	list.push_back(ctime(&_dateTime));
	return list;
}
