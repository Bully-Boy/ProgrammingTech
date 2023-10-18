#pragma once
#include <iostream>
#include <string>
#include "Factory.h";

using namespace std;

class Furniture : public Factory 
{
private:
	string m_type;
	int m_height;
	int m_weidht;
	int m_depth;
	string m_color;
	string m_material;
	int m_cost;


public:
	Furniture(string type, int height, int weidht, int depth, string color, string material, int cost);
	~Furniture();
	friend std::ostream& operator<<(std::ostream& out, const Factory& fac);
	void set();
	string get();
};