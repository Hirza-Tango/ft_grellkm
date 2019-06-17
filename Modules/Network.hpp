#ifndef NETWORK_HPP
#define NETWORK_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>

class Network: public IMonitorModule{
private:
	size_t _max_bandwidth;
	Network(const Network &);
	Network &operator= (const Network &);
public:
	Network();
	~Network();
	float getPercent();
};

#endif
