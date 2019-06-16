#include "HostnameUsername.hpp"
#include <unistd.h>
#include <limits.h>

HostnameUsername::HostnameUsername(){
	_name = "HostnameUsername";
	_tick_rate = 0;
	char hostname[HOST_NAME_MAX];
	char username[LOGIN_NAME_MAX];
	gethostname(hostname, HOST_NAME_MAX);
	getlogin_r(username, LOGIN_NAME_MAX);
	_hostname = hostname;
	_username = username;
}

HostnameUsername::~HostnameUsername(){}

std::vector<std::string> HostnameUsername::getInfo(){
	std::vector<std::string> list;
	list.push_back(_hostname);
	list.push_back(_username);
	return list;
}
