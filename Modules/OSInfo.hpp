#ifndef OSINFO_HPP
#define OSINFO_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>
#include <sys/utsname.h>

class OSInfo: public IMonitorModule{
private:
	struct utsname _info;
	OSInfo(const OSInfo &);
	OSInfo &operator= (const OSInfo &);
public:
	OSInfo();
	~OSInfo();
	std::vector<std::string> getInfo();
};

#endif
