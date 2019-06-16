#ifndef CPU_HPP
#define CPU_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>

class CPU: public IMonitorModule{
private:
	std::string _model;
	std::string _clock_speed;
	unsigned short cores;
	float *percentage;
	CPU(const CPU &);
	CPU &operator= (const CPU &);
public:
	CPU();
	~CPU();
	std::vector<std::string> getInfo();
};

#endif
