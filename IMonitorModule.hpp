#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <string>

class IMonitorModule{
private:
	std::string _name;
	int _tick_rate;

	IMonitorModule(const IMonitorModule &);
	IMonitorModule &operator= (const IMonitorModule &);
public:
	IMonitorModule();
	virtual ~IMonitorModule();

	virtual std::vector<std::string> getInfo();
	virtual std::string getName();
};

#endif
