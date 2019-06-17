#ifndef DATETIME_HPP
#define DATETIME_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>
#include <ctime>

class DateTime: public IMonitorModule{
private:
	DateTime(const DateTime &);
	DateTime &operator= (const DateTime &);
public:
	DateTime();
	~DateTime();
	float getPercent();
};

#endif
