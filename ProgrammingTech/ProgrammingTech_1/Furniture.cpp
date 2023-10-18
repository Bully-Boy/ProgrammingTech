#include "Furniture.h"

Furniture::Furniture(string type, int height, int weidht, int depth, string color, string material, int cost):
	m_type(type), m_height(height), m_weidht(weidht), m_depth(depth), m_color(color), m_material(material), m_cost(cost)
{
	cout << "Был вызван конструктор  класса Furniture." << endl;
}



Furniture::~Furniture() 
{
	cout << "Был вызван деструктор объекта класса Furniture." << endl;
}

std::ostream& operator<<(std::ostream& out, const Factory& fac)
{
	std::cout << "hhh" << std::endl;
}


void Furniture::set() 
{

}

string Furniture::get() 
{

}
