#include "pch.h"
#include <iostream>
#include <memory>
#include <string>

using namespace std;

struct destination {
	string ip;
	int port;
	destination(string _ip, int _port):ip(_ip), port(_port) {}
};

struct connection {
	string ip;
	int port;
	connection(std::string ip_, int port_) :ip(ip_), port(port_) { }
};
connection connect(destination* pDest)
{
	shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
	std::cout << "creating connection(" << pConn.use_count() << ")" << std::endl;
	return *pConn;
}

void disconnect(connection pConn)
{
	std::cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" << std::endl;
}

void end_connection(connection *p)
{
	disconnect(*p);
}

void f(destination &d)
{
	connection c = connect(&d);
	shared_ptr<connection> p(&c, end_connection);
	std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}

int main()
{
	destination dest("202.118.176.67", 3316);
	f(dest);
	return 0;
}
