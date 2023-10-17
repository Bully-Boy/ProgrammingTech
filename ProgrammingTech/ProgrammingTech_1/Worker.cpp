#include "Worker.h"

Worker::Worker() 
{
	cout << "Был вызван конструктор без параметров объекта класса Worker." << endl;
}

Worker::Worker() 
{

	cout << "Был вызван конструктор с параметрами объекта класса Worker." << endl;
}

Worker::~Worker() {
	cout << "Был вызван деструктор объекта класса Worker." << endl;
}

void Worker::set() {
}

string Worker::get() {
}