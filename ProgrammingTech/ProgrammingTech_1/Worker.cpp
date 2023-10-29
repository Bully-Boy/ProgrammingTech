#include "Worker.h"
#include <fstream>

Worker::Worker()
{
	std::cin >> *this;
	std::cout << "the class constructor was called Worker." << std::endl;
}

Worker::Worker(std::string name, std::string post, int vages, std::string address, std::string phone_number)
	: m_name(name), m_post(post), m_vages(vages), m_address(address), m_phone_number(phone_number)
{}


Worker::~Worker()
{
	std::cout << "the class destructor was called Worker." << std::endl;
}

void Worker::save(std::string path)
{
	
	std::ofstream file;
	file.open(path, std::ios::app);
	if (!file) {
		std::cout << "\033[91mError while opening file " << path << " to load data.\033[0m";
		return;
	}
	file << "Worker:" << std::endl
		<< "Name " << m_name << std::endl
		<< "Post " << m_post << std::endl
		<< "Vages " << m_vages << std::endl 
		<< "Addres " << m_address << std::endl
		<< "Phone number " << m_phone_number << std::endl;
	file.close();
}



std::ostream& operator<<(std::ostream& out, Worker& worker)
{
	out << "name " << worker.m_name << std::endl;
	out << "post " << worker.m_post << std::endl;
	out << "vages " << worker.m_vages << std::endl;
	out << "address " << worker.m_address << std::endl;
	out << "phone number" << worker.m_phone_number << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Worker& worker)
{
	std::cout << "name" << std::endl;
	in >> worker.m_name;
	std::cout << "post" << std::endl;
	in >> worker.m_post;
	std::cout << "vages" << std::endl;
	in >> worker.m_vages;
	std::cout << "address" << std::endl;
	in >> worker.m_address;
	std::cout << "phone_number" << std::endl;
	in >> worker.m_phone_number;
	return in;
}
