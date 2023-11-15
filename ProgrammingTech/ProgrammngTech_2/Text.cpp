#include "Text.h"
#include <iostream>
#include <fstream>

class Anyof
{
public :
	bool operator()(char* arr, char symbol)
	{
		for (int i = 0; arr[i] != '\0'; i++) {
			if (arr[i] == symbol) {
				return true;
			}
		}
		return false;
	}
	bool operator()(char symbol, char* arr)
	{
		return anyof(arr, symbol);
	}

	bool operator()(std::string arr, char symbol)
	{
		for (int i = 0; arr[i] != '\0'; i++) {
			if (arr[i] == symbol) {
				return true;
			}
		}
		return false;
	}
	bool operator()(char symbol, std::string arr)
	{
		return anyof(arr, symbol);
	}
}anyof;

Text::Text(std::string name)
	:m_file_name(name)
{
	try {
		m_file.open(m_file_name);
		if (!m_file) {
			throw std::runtime_error("Error while opening file " + m_file_name + " to load data.\n");
		}
	}
	catch (const std::exception& e)
	{
		std::cout << "\033[91m" << e.what() << "\033[0m";
		return;
	}
	std::string sentence = "";
	char separator[] = { '.', '?', '!', '…', '\0'};
	char symbol;
	while (m_file.get(symbol))
	{
		sentence += symbol;
		if (anyof(separator, symbol))
		{
			m_text.push_back(sentence);
			sentence = "";
		}
	}
}

void Text::Show()
{
	for (auto& sentence : m_text)
	{
		if(!anyof(sentence,','))
			std::cout << sentence;
	}
}