#include "Equipment.h"

Equipment::Equipment(string brand, string model, string gos_number) :
	m_brand(brand), m_model(model), m_gos_number(gos_number)
{

	cout << "��� ������ �����������  ������ Equipment." << endl;
}



Equipment::~Equipment() 
{
	cout << "��� ������ ���������� ������� ������ Equipment." << endl;
}
std::ostream& operator<<(std::ostream& out, const Factory& fac)
{
	std::cout << "hhh" << std::endl;
}
void Equipment::set() 
{
	
}
string Equipment::get() 
{

}
