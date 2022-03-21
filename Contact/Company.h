#pragma once
#include <string>
class Company
{
private:
	std::string name;
	std::string position;
public:

	Company(std::string name,std::string pos) {
		this->name = name;
		this->position = pos;
	}

};