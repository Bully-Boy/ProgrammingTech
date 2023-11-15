#pragma once
#include <fstream>
#include <vector>


class Text
{
private:
	std::ifstream m_file;
	std::string m_file_name;
	std::vector<std::string> m_text;

public:
	Text(std::string path);
	void Show();
};

