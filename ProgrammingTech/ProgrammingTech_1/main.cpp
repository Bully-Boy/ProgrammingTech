#include <list>
#include <iostream>
#include "Keeper.h"
#define cles 1
using namespace std;

void menu();
void men();
void cls();



int main(void)                         //   1. Реализовать меню						2. Узнать про работу с файлами и реализовать
{									   //   3. Узнать про абстрактность класса		4. Узнать про динамическое выделение памяти
	menu();
	return 0;
}

void menu()
{
	int choice = 0;
	int k = 0;
	
	men();
	while (choice != 6)
	{
		cin >> choice;
		cls();
		
		switch (choice)
		{
		case 1: //////////////////////////////Open list menu
		{
			cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
			cout << "List\n";
			k = 0;
			while (k != 3)
			{
				cin >> k;
				cls();
				cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
				cout << "List\n";
			}
			break;
		}
		case 2: //////////////////////////////Open deck menu
		{
			k = 0;
			cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
			cout << "Deck\n";
			while (k != 3)
			{
				cin >> k;
				cls();
				cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
				cout << "Deck\n";
				
			}
			break;
		}
		case 3:
		{
			k = 0;
			cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
			cout << "Stack\n";
			while (k != 3)
			{
				cin >> k;
				cls();
				cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
				cout << "Stack\n";
			
			}
			break;
		}
		case 4:
			cls();
			men();
			cout << "File imported!\n" << endl;
			break;
		case 5:
			cls();
			men();
			cout << "File exported!\n" << endl;
			break;
		case 6:
			cls();
			men();
			break;
		default:
			cls();
			men();
			cout << "Incorrect input!\n" << endl;
			break;
		}
	}
}

void men()
{
	cout << "Menu:\n(1)List\n(2)Deck\n(3)Stack\n(4)Import file\n(5)Export file\n(6)Exit" << endl << endl;
}

void cls()
{
	if (cles)
		system("cls");
}
