#include "Keeper.h"
#include "Worker.h"
#include <iostream>
#include <fstream>
#include <algorithm>

class cmp
{
public:
	bool operator() (const Worker& a, const Worker& b)
	{
		return a.getFio() < b.getFio();
	}
} compare;

Keeper::Keeper()	{menu();}

Keeper::~Keeper()	{}

Keeper& Keeper::sort()
{
	std::sort(m_workers.begin(), m_workers.end(), compare);
	return *this;
}

Keeper& Keeper::work_experience()
{
	std::cout << "Enter work experience: " << std::endl;
	int experience;
	std::cin >> experience;

	int i{};
	for (auto& worker : m_workers)
	{
		if (worker.getYearOfAdmissionToWork() > experience)
			std::cout << ++i << ") " << worker.getFio() << std::endl;
	}
	if (i == 0)
		std::cout << "No worker with work experience = " << experience << std::endl;
	return *this;
}

void Keeper::menu()
{
	while (true)
	{
		system("cls");
		std::cout << "Menu\n"
			<< "1) Add Worker\n"
			<< "2) Remuve Worker\n"
			<< "3) Load Data\n"
			<< "4) Save Data\n"
			<< "5) Show Workers\n"
			<< "6) Work experience\n"
			<< "7) Sort\n"
			<< "8) Exit\n"
			<< std::endl;

		int choose;
		std::cin >> choose;
		switch (choose)
		{
			case 1: {m_workers.push_back(Worker());			break; }
			case 2: {m_workers.pop_back();					break; }
			case 3: {LoadData();							break; }
			case 4: {SaveData();							break; }
			case 5: {Show(); system("pause");				break; }
			case 6: {work_experience();	system("pause");	break; }
			case 7: {sort();								break; }
			default:
				exit(0);
		}
	}
}

void Keeper::LoadData()
{
	std::string input_string;
	std::ifstream file;
	std::string file_name = "worker.txt";
	try {
		file.open(file_name);
		if (!file) {
			throw std::runtime_error("Error while opening file " + file_name + " to load data.\n");
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
		std::string fio = input_string;
		getline(file, input_string);
		std::string post = input_string;
		getline(file, input_string);
		int year = std::stoi(input_string);
			
		m_workers.push_back(Worker(fio, post, year));

	}
}

void Keeper::SaveData()
{
	std::ofstream file;
	std::string file_name = "worker1.txt";
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
	for (auto& worker : m_workers)
		worker.save(file_name);

	file.close();
}

void Keeper::Show()
{
	for (auto& worker : m_workers)
		std::cout << worker << std::endl;
}
