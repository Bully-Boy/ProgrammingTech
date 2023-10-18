#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Worker.h"
#include "Furniture.h"
#include "Equipment.h"

using namespace std;

class Factory 
{
private:
	vector<Worker> worker;
	vector<Furniture> furniture;
	vector<Equipment> equipment;

public:
	Factory();
	virtual ~Factory(); 

    void LoadData();
    void SaveData(std::string flag);
    void ShowAll();

    void AddStudent();
    void RemoveStudent();
    void ShowWorker();

    void AddTeacher();
    void RemoveTeacher();
    void ShowFurniture();

    void AddStaff();
    void RemoveStaff();
    void ShowEquipment();

};