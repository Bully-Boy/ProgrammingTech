#include "Worker.h"

Worker::Worker(string name, string post, int vages, string address, string phone_number):
	m_name(name), m_post(post), m_vages(vages), m_address(address), m_phone_number(phone_number)
{
	cout << "Был вызван конструктор  класса Worker." << endl;
}



Worker::~Worker() 
{
	cout << "Был вызван деструктор объекта класса Worker." << endl;
}

std::ostream& operator<<(std::ostream& out, const Factory& fac)
{
	std::cout << "hhh" << std::endl;
}

void Worker::set() 
{
}

string Worker::get() 
{
}