#include <iostream>
#include <string>
#include "Factory.h";

using namespace std;

class Equipment : public Factory {
private:

public:
	Equipment();
	Equipment(string breed, string color, string feedType);
	~Equipment();
	void set();
	string get();
};