#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Factory.h"
#include "Worker.h"
#include "Equipment.h"
#include "Furniture.h"
#include <fstream>

class Keeper
{
private:
    std::vector<Worker> m_worker;
    std::vector<Furniture> m_furniture;
    std::vector<Equipment> m_equipment;

public:

    Keeper();
    ~Keeper();

    void menu();

    void AllMenu();
    void LoadData();
    void SaveData();
    void ShowAll();

    void WorkerMenu();
    void ShowWorker();

    void FurnitureMenu();
    void ShowFurniture();

    void EquipmentMenu();
    void ShowEquipment();
};
