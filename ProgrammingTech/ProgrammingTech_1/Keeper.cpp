#include "Keeper.h"
#include"Factory.h"
#include<iostream>

Keeper::Keeper()
{
	Size = 0;
	head = nullptr;
	tail = nullptr;
}

Keeper::~Keeper()
{
	clear();
}

void Keeper::pop_front() // удалить head
{
	Node* temp = head;
	head = head->pNext;

	delete temp;

	Size--;
}

void Keeper::pop_back() // удалить tail
{
	Node* temp = tail;
	tail = tail->pPrev;
	tail->pNext = nullptr;
	delete temp;

	Size--;
}

void Keeper::push_back(Factory &data) // добавить назад
{
	if (head == nullptr)
	{
		head = new Node(data);
		tail = this->head;
	}
	else
	{
		Node* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data, current->pNext, current);
		tail = current->pNext;
	}
	Size++;
}

void Keeper::push_front(Factory &data)  // добавить вперед
{
	if (head == nullptr)
	{
		head = new Node(data);
		tail = this->head;
	}
	else
	{
		Node* current = this->head;

		current->pPrev = new Node(data, current, current->pPrev);
		head = current->pPrev;
	}
	Size++;
}

void Keeper::clear() // очистка
{
	while (Size)
	{
		pop_front();
	}
}


int Keeper::GetSize() //
{
	return Size;
}


void Keeper::Show() //
{
	Node* current = this->head;
	if (current != nullptr)
	{
		while (current->pNext != nullptr)
		{
			cout << current->data << " ";
			current = current->pNext;
		}
		cout << current->data << " " << endl;
	}
	else
		cout << "The list is empty!!!" << endl;
}

Node::Node(Factory data, Node* pNext, Node* pPrev) //
{
	this->data = data;
	this->pNext = pNext;
	this->pPrev = pPrev;
}