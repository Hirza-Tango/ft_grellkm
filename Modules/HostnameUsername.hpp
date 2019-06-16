#ifndef HOSTNAMEUSERNAME_HPP
#define HOSTNAMEUSERNAME_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>

class HostnameUsername: public IMonitorModule{
private:
	std::string _hostname;
	std::string _username;
	HostnameUsername(const HostnameUsername &);
	HostnameUsername &operator= (const HostnameUsername &);
public:
	HostnameUsername();
	~HostnameUsername();
	std::vector<std::string> getInfo();
};

#endif
