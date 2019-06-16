#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <string>
#include <vector>

class IMonitorModule{
protected:
	std::string _name;
	int _tick_rate;

private:
	IMonitorModule(const IMonitorModule &);
	IMonitorModule &operator= (const IMonitorModule &);
public:
	IMonitorModule();
	virtual ~IMonitorModule();

	virtual std::vector<std::string> getInfo();
	std::string getName();
};

#endif
