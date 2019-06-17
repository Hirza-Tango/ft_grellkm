#ifndef OSINFO_HPP
#define OSINFO_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>


class OSInfo: public IMonitorModule{
private:
	OSInfo(const OSInfo &);
	OSInfo &operator= (const OSInfo &);
public:
	OSInfo();
	~OSInfo();
	float getPercent();
};

#endif
