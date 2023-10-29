#pragma once
#include <iostream>
#include <string>
#include "Factory.h"
#include <fstream>

class Equipment : public Factory
{
private:
	std::string m_brand;
	std::string m_model;
	std::string m_gos_number;

public:

	std::string getBrand() { return this->m_brand; }
	std::string getModer() { return this->m_model; }
	std::string getGos_number() { return this->m_gos_number; }

	void setBrand(const std::string& brand) {m_brand = brand;}
	void setModel(const std::string& model) {m_model = model;}
	void setGosNumber(const std::string& gos_number) {m_gos_number = gos_number;}
	

	Equipment()
	{
		std::cin >> *this;
		std::cout << "the class constructor was called Equipment." << std::endl;
	}

	Equipment(std::string brand, std::string model, std::string gos_number)
		: m_brand(brand), m_model(model), m_gos_number(gos_number)
	{}
	~Equipment() { std::cout << "the class destructor was called" << std::endl; }

	friend std::ostream& operator<<(std::ostream& out, Equipment& equipment)
	{
		std::cout << "brand" << equipment.m_brand << std::endl;
		std::cout << "model" << equipment.m_model << std::endl;
		std::cout << "gos_number" << equipment.m_gos_number << std::endl;

		return out;
	}
	friend std::istream& operator>>(std::istream& in, Equipment& equipment)
	{
		std::cout << "Brand \n" << std::endl;
		in >> equipment.m_brand;

		std::cout << "Model \n" << std::endl;
		in >> equipment.m_model;

		std::cout << "Gos_number \n" << std::endl;
		in >> equipment.m_gos_number;
		return in;
	}

	void save(std::string path)
	{

		std::ofstream file;
		file.open(path, std::ios::app);
		if (!file) {
			std::cout << "\033[91mError while opening file " << path << " to load data.\033[0m";
			return;
		}
		file << "Equipment" << std::endl
			<< "Brand " << m_brand << std::endl
			<< "Model " << m_model << std::endl
			<< "Gos number " << m_gos_number << std::endl;
		file.close();
	}

};