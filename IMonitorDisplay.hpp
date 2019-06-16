#ifndef IMONITORDISPLAY_HPP
#define IMONITORDISPLAY_HPP

#include <ostream>
#include <string>

class IMonitorDisplay{
private:
	IMonitorDisplay(const IMonitorDisplay &);
	IMonitorDisplay &operator= (const IMonitorDisplay &);
public:
	IMonitorDisplay();
	virtual ~IMonitorDisplay();

	virtual void render(void);
	//virtual void refresh(void);
};


#endif
