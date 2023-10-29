#pragma once
#include <iostream>
#include <string>
#include <vector>

class Factory
{
public:

	Factory();
	~Factory();

	virtual void save(std::string path) = 0;

};