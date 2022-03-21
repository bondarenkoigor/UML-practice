#pragma once
#include<string>

using namespace std;
class Car {
private:
	string mark;
	string model;
	string licensePlate;
public:
	Car(string mark, string model,string licensePlate)
	{
		this->mark = mark;
		this->model = model;
		this->licensePlate = licensePlate;
	}
};