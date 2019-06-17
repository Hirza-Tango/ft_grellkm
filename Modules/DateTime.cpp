#include "DateTime.hpp"
#include <ctime>

DateTime::DateTime(){
	_tick_rate = 1;
	_name = "DateTime";
	time_t current_time = time(NULL);
	_info.push_back(ctime(&current_time));
}

DateTime::~DateTime(){}

float DateTime::getPercent(){
	return -1;
}
