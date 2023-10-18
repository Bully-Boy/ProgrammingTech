#pragma once
#include <iostream>
#include <string>
#include "Factory.h"
using namespace std;


class Node
{
public:
	Node* pNext;
	Node* pPrev;
	Node* Link;
	Factory data;
	Node(Factory data = Factory(), Node* pNext = nullptr, Node* pPrev = nullptr);
};

class Keeper
{
private:
	int Size;
	Node* head;
	Node* tail;

public:
	Keeper();
	~Keeper();

	void pop_front();
	void pop_back();
	void push_back(Factory &data);
	void push_front(Factory &data);
	void clear();

	int GetSize();
	void Show();

};
