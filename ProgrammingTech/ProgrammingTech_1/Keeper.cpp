#include "Keeper.h"
#include "Factory.h"
#include <iostream>
#include <fstream>

Keeper::Keeper()
{
	std::cout << "the class constructor was called Keepeer" << std::endl;
	menu();
}

Keeper::~Keeper() { std::cout << "the class destructor was called" << std::endl; }

void Keeper::menu()
{
	std::cout << "Menu\n"
		<< "1) All\n"
		<< "2) Worker\n"
		<< "3) Equipment\n"
		<< "4) Furniture\n"
		<< "5) Exit\n"
		<< std::endl;
	int choose;
	std::cin >> choose;

	switch (choose)
	{
	case 1: {AllMenu();			break;}
	case 2:	{WorkerMenu();		break;}
	case 3:	{EquipmentMenu();	break;}
	case 4:	{FurnitureMenu();	break;}
	default:
		exit(0);
	}
}

////////////////////////// All

void Keeper::AllMenu()
{
	std::cout << "1) Load Data \n"
		<< "2) Save Data\n"
		<< "3) Show All \n"
		<< "4) Menu\n"
		<< "5) Exit\n"
		<< std::endl;

	int choose;
	std::cin >> choose;
	switch (choose)
	{
	case 1:{LoadData();		break;}
	case 2:{SaveData();		break;}
	case 3:{ShowAll();		break;}
	default:
		exit(0);
	}
	menu();
}
void Keeper::LoadData()
{
	int factory_code;
	std::string input_string;
	std::ifstream file;
	std::string file_name = "factory.txt";
	try {
		file.open(file_name);
		if (!file) {
			throw std::runtime_error("Error while opening file " + file_name + " to save data.");
		}
	}
	catch (const std::exception& e) 
	{
		std::cout << "\033[91m" << e.what() << "\033[0m";
		return;
	}
	while (!file.eof())
	{
		getline(file, input_string);
		factory_code = std::stoi(input_string);
		if (factory_code == 1) 
		{
			getline(file, input_string);
			std::string name = input_string;
			getline(file, input_string);
			std::string post = input_string;
			getline(file, input_string);
			int vages = std::stoi(input_string);
			getline(file, input_string);
			std::string address = input_string;
			getline(file, input_string);
			std::string phone_number = input_string;

			m_worker.push_back(Worker(name, post, vages, address, phone_number));
		}
		else if (factory_code == 3) 
		{
			getline(file, input_string);
			std::string type = input_string;
			getline(file, input_string);
			int height = std::stoi(input_string);;
			getline(file, input_string);
			int weidht = std::stoi(input_string);;
			getline(file, input_string);
			int depth = std::stoi(input_string);;
			getline(file, input_string);
			std::string color = input_string;
			getline(file, input_string);
			std::string material = input_string;
			getline(file, input_string);
			int cost = std::stoi(input_string);;

			m_furniture.push_back(Furniture(type, height, weidht, depth, color, material, cost));
		}
		else if (factory_code == 2) 
		{
			getline(file, input_string);
			std::string brand = input_string;
			getline(file, input_string);
			std::string model = input_string;
			getline(file, input_string);
			std::string gos_number = input_string;

			m_equipment.push_back(Equipment(brand, model, gos_number));

		}
	}
}

void Keeper::SaveData()
{
	std::ofstream file;
	std::string file_name = "factory1.txt";
	try {
		file.open(file_name);
		if (!file) {
			throw std::runtime_error("Error while opening file " + file_name + " to save data.");
		}
	}
	catch (const std::exception& e) {
		std::cout << "\033[91m" << e.what() << "\033[0m";
		return;
	}
	for (auto& worker : m_worker)
		worker.save(file_name);

	for (auto& equipment : m_equipment)
		equipment.save(file_name);

	for (auto& furniture : m_furniture)
		furniture.save(file_name);
	
	
	file.close();

}

void Keeper::ShowAll()
{
	std::cout << "Worker" << std::endl;
	ShowWorker();

	std::cout << "Equipment" << std::endl;
	ShowEquipment();

	std::cout << "Furniture" << std::endl;
	ShowFurniture();
}

////////////////////////// Worker
void Keeper::WorkerMenu()
{
	std::cout << "1) Add\n"
		<< "2) Remove\n"
		<< "3) Show\n"
		<< "4) All menu\n"
		<< std::endl;
	int choose;
	std::cin >> choose;
	switch (choose)
	{
	case 1:{m_worker.push_back(Worker());	break;}
	case 2:{m_worker.pop_back();			break;}
	case 3:{this->ShowWorker();				break;}
	default:
		menu();
		break;
	}
	this->WorkerMenu();
}

void Keeper::ShowWorker()
{
	for (auto& worker : this->m_worker)
		std::cout << worker;
}

////////////////////////// Furniture
void Keeper::FurnitureMenu()
{
	std::cout << "1) Add\n"
		<< "2) Remove\n"
		<< "3) Show\n"
		<< "4) All menu\n"
		<< std::endl;
	int choose;
	std::cin >> choose;
	switch (choose)
	{
	case 1: {m_furniture.push_back(Furniture());	break;}
	case 2: {m_furniture.pop_back();				break;}
	case 3: {this->ShowFurniture();					break;}
	default:
		menu();
		break;
	}
	this->FurnitureMenu();
}


void Keeper::ShowFurniture()
{
	for (auto& furniture : this->m_furniture)
		std::cout << furniture;
}

////////////////////////// Equipment
void Keeper::EquipmentMenu()
{
	std::cout << "1) Add\n"
		<< "2) Remove\n"
		<< "3) Show\n"
		<< "4) All menu\n"
		<< std::endl;
	int choose;
	std::cin >> choose;
	switch (choose)
	{
	case 1: {m_equipment.push_back(Equipment());	break;}
	case 2: {m_equipment.pop_back();				break;}
	case 3: {this->ShowEquipment();					break;}
	default:
		menu();
		break;
	}
	this->EquipmentMenu();
}

void Keeper::ShowEquipment()
{
	for (auto& equipment : this->m_equipment)
		std::cout << equipment;
}