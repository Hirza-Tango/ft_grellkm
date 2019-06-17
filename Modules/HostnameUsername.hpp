#ifndef HOSTNAMEUSERNAME_HPP
#define HOSTNAMEUSERNAME_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>

class HostnameUsername: public IMonitorModule{
private:
	HostnameUsername(const HostnameUsername &);
	HostnameUsername &operator= (const HostnameUsername &);
public:
	HostnameUsername();
	~HostnameUsername();
	float getPercent();
};

#endif
