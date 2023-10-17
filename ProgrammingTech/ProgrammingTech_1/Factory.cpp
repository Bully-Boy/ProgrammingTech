#include"Factory.h";

Factory::Factory() {
	cout << "Был вызван конструктор объекта класса Factory." << endl;
}

Factory::Factory(string breed, string color) {
	this->breed = breed;
	this->color = color;
}

Factory::~Factory() {
	cout << "Был вызван деструктор объекта класса Factory." << endl;
} 

void Factory::set() {

}

string Factory::get() {
}

std::ostream& operator<<(std::ostream& out, const Factory& fac)
{

}

