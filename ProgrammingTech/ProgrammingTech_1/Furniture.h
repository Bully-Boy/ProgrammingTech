#include <iostream>
#include <string>
#include "Factory.h";

using namespace std;

class Furniture : public Factory {
private:

public:
	Furniture();
	Furniture();
	~Furniture();

	void set();
	string get();
};