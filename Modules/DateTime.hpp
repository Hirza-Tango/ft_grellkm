#ifndef DATETIME_HPP
#define DATETIME_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>
#include <ctime>

class DateTime: public IMonitorModule{
private:
	std::time_t _dateTime;
	DateTime(const DateTime &);
	DateTime &operator= (const DateTime &);
public:
	DateTime();
	~DateTime();
	std::vector<std::string> getInfo();
};

#endif
