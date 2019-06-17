#include "HostnameUsername.hpp"
#include <unistd.h>
#include <limits.h>

HostnameUsername::HostnameUsername(){
	_name = "HostnameUsername";
	_tick_rate = 0;
	char hostname[_POSIX_HOST_NAME_MAX];
	char username[_POSIX_LOGIN_NAME_MAX];
	gethostname(hostname, _POSIX_HOST_NAME_MAX);
	getlogin_r(username, _POSIX_LOGIN_NAME_MAX);
	_info.push_back(hostname);
	_info.push_back(username);
}

HostnameUsername::~HostnameUsername(){}

float HostnameUsername::getPercent(){
	return -1;
}
