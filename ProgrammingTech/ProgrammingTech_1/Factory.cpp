#include"Factory.h";

Factory::Factory() 
{
	cout << "��� ������ ����������� ������� ������ Factory." << endl;
}


Factory::~Factory() 
{
	cout << "��� ������ ���������� ������� ������ Factory." << endl;
} 

void print()
{
	std::cout << *this;
}
std::ostream& operator<<(std::ostream& out, const Factory& fac)
{

}

