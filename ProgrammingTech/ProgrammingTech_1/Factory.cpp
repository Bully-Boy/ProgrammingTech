#include"Factory.h";

Factory::Factory() {
	cout << "��� ������ ����������� ������� ������ Factory." << endl;
}

Factory::Factory(string breed, string color) {
	this->breed = breed;
	this->color = color;
}

Factory::~Factory() {
	cout << "��� ������ ���������� ������� ������ Factory." << endl;
} 

void Factory::set() {

}

string Factory::get() {
}

std::ostream& operator<<(std::ostream& out, const Factory& fac)
{

}

