#include"Factory.h";

Factory::Factory() 
{
	cout << "Был вызван конструктор объекта класса Factory." << endl;
}


Factory::~Factory() 
{
	cout << "Был вызван деструктор объекта класса Factory." << endl;
} 

void print()
{
	std::cout << *this;
}
std::ostream& operator<<(std::ostream& out, const Factory& fac)
{

}

