#ifndef CPU_HPP
#define CPU_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>

class CPU: public IMonitorModule{
private:
	CPU(const CPU &);
	CPU &operator= (const CPU &);
public:
	CPU();
	~CPU();
	float getPercent();
};

#endif
