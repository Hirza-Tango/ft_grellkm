#ifndef NETWORK_HPP
#define NETWORK_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>

class Network: public IMonitorModule{
private:
	std::string _model;
	std::string _clock_speed;
	unsigned short cores;
	float *percentage;
	Network(const Network &);
	Network &operator= (const Network &);
public:
	Network();
	~Network();
	std::vector<std::string> getInfo();
};

#endif
