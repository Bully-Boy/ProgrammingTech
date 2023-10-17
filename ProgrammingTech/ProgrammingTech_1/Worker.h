#include <iostream>
#include <string>
#include "Factory.h";

using namespace std;

class Worker : public Factory {
private:

public:
	Worker();
	Worker();
	~Worker();

	void set();
	string get();
};