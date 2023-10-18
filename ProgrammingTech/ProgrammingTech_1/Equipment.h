#pragma once
#include <iostream>
#include <string>
#include "Factory.h"


using namespace std;

class Equipment : public Factory 
{
private:
	string m_brand;
	string m_model;
	string m_gos_number;

public:
	Equipment(string brand, string model, string gos_number);

	~Equipment();
	friend std::ostream& operator<<(std::ostream& out, const Factory& fac);
	void set();
	string get();
};