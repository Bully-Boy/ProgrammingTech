#include "Furniture.h"

Furniture::Furniture() {
	cout << "Был вызван конструктор без параметров объекта класса Furniture." << endl;
}

Furniture::Furniture() {

	cout << "Был вызван конструктор с параметрами объекта класса Furniture." << endl;
}

Furniture::~Furniture() {
	cout << "Был вызван деструктор объекта класса Furniture." << endl;
}

void Furniture::set() {
}
string Furniture::get() {
}
