#include <iostream>
#include <string>

using namespace std;

class Factory 
{
protected:
	string breed;
	string color;
public:
	Factory();
	Factory(string breed, string color);
	~Factory(); 

	void set();
	string get();

	friend std::ostream& operator<<(std::ostream& out, const Factory& fac);
};