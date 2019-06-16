#ifndef RAM_HPP
#define RAM_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>

class Ram: public IMonitorModule{
private:
	long _mem_total;
	long _mem_used;
	long _mem_free;
	Ram(const Ram &);
	Ram &operator= (const Ram &);
public:
	Ram();
	~Ram();
	std::vector<std::string> getInfo();
};

#endif
