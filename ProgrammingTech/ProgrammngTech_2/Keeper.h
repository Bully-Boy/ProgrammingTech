#pragma once
#include <vector>
#include "Worker.h"
class Keeper
{
private:
	std::vector<Worker> m_workers;

public:
	Keeper();
	~Keeper();

	void menu();
	void LoadData();
	void SaveData();
	void Show();

	Keeper& sort();

	Keeper& work_experience();
};

