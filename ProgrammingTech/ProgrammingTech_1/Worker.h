#pragma once
#include <iostream>
#include <string>
#include "Factory.h"

using namespace std;

class Worker : public Factory 
{
private:
	string m_name;
	string m_post;
	int m_vages;
	string m_address;
	string m_phone_number;

public:
	Worker(string name, string post, int vages, string address, string phone_number);
	~Worker();
	friend std::ostream& operator<<(std::ostream& out, const Factory& fac);
	void set();
	string get();
};