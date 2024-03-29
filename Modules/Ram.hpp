#ifndef RAM_HPP
#define RAM_HPP
#include "../IMonitorModule.hpp"

#include <string>
#include <vector>

class Ram: public IMonitorModule{
private:
	uint64_t _mem;
	uint64_t _page_size;
	Ram(const Ram &);
	Ram &operator= (const Ram &);
public:
	Ram();
	~Ram();
	float getPercent();
};

#endif
