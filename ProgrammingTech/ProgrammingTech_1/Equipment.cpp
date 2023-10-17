#include "Equipment.h"

Equipment::Equipment() {
	cout << "Был вызван конструктор без параметров объекта класса Equipment." << endl;
}

Equipment::Equipment(string breed, string color, string feedType) {
	cout << "Был вызван конструктор с параметрами объекта класса Equipment." << endl;
}

Equipment::~Equipment() {
	cout << "Был вызван деструктор объекта класса Equipment." << endl;
}

void Equipment::set() {
	
}
string Equipment::get() {

}
