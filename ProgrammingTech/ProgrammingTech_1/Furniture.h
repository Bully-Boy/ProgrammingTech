#pragma once
#include <iostream>
#include <string>
#include "Factory.h"

class Furniture : public Factory
{
private:
	std::string m_type;
	int m_height;
	int m_weidht;
	int m_depth;
	std::string m_color;
	std::string m_material;
	int m_cost;


public:
	Furniture();
	Furniture(std::string type, int height, int weidht, int depth, std::string color, std::string material, int cost);
	~Furniture();

	virtual void save(std::string path);
	friend std::ostream& operator<<(std::ostream& out, Furniture& furntirure);
	friend std::istream& operator>>(std::istream& in, Furniture& furntirure);
};