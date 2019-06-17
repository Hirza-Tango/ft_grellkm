#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <string>
#include <vector>

class IMonitorModule{
protected:
	std::string _name;
	int _tick_rate;
	std::vector<std::string> _info;
private:
	IMonitorModule(const IMonitorModule &);
	IMonitorModule &operator= (const IMonitorModule &);
public:
	IMonitorModule();
	virtual ~IMonitorModule();

	std::vector<std::string> getInfo();
	virtual float getPercent();
	std::string getName();
};

#endif
