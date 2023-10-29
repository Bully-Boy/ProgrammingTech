#include "Furniture.h"
#include <fstream>


Furniture::Furniture()
{
	std::cin >> *this;
	std::cout << "the class constructor was called Furniture." << std::endl;
}

Furniture::Furniture(std::string type, int height, int weidht, int depth, std::string color, std::string material, int cost)
	: m_type(type), m_height(height), m_weidht(weidht), m_depth(depth), m_color(color), m_material(material), m_cost(cost)
{}

Furniture::~Furniture()
{
	std::cout << "the class destructor was called Furniture." << std::endl;
}

std::ostream& operator<<(std::ostream& out, Furniture& furntirure)
{
	out << "type " << furntirure.m_type << std::endl;
	out << "height " << furntirure.m_height << std::endl;
	out << "weidht " << furntirure.m_weidht << std::endl;
	out << "depth " << furntirure.m_depth << std::endl;
	out << "color " << furntirure.m_color << std::endl;
	out << "material " << furntirure.m_material << std::endl;
	out << "cost " << furntirure.m_cost << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Furniture& furntirure)
{
	std::cout << "type" << std::endl;
	in >> furntirure.m_type;
	std::cout << "height" << std::endl;
	in >> furntirure.m_height;
	std::cout << "weidht" << std::endl;
	in >> furntirure.m_weidht;
	std::cout << "depth" << std::endl;
	in >> furntirure.m_depth;
	std::cout << "color" << std::endl;
	in >> furntirure.m_color;
	std::cout << "material" << std::endl;
	in >> furntirure.m_material;
	std::cout << "cost" << std::endl;
	in >> furntirure.m_cost;
	return in;
}

void Furniture::save(std::string path)
{
	std::ofstream file;
	file.open(path, std::ios::app);
	if (!file) {
		std::cout << "\033[91mError while opening file " << path << " to load data.\033[0m";
		return;
	}
	file << "Furniture " << std::endl
		<< "Type " << m_type << std::endl
		<< "Height " << m_height << std::endl
		<< "Weidht " << m_weidht << std::endl
		<< "Depth " << m_depth << std::endl
		<< "Color " << m_color << std::endl
		<< "Material " << m_material << std::endl
		<< "Cost " << m_cost << std::endl;
	file.close();
}
