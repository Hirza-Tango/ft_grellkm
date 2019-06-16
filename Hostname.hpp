#ifndef HOSTNAME_HPP
#define HOSTNAME_HPP

#include <string>

class Hostname{
private:
	/* stuff */
public:
	Hostname();
	~Hostname();
	Hostname(const Hostname &);
	Hostname &operator= (const Hostname &);
};

#endif
