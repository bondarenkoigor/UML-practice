#pragma once
#include <string>
#include"Additional.h"
#include"Company.h"
#include"Car.h"
#include"Adress.h"

using namespace std;
class card {

private:
	FIO name;
	Date birthday;

	string phone;
	Address* addres;

	Car* car;
	Company* company;
public:

	card(string name, string surname, string patronymic, int day, int mounth, int year, string phone,
		string country, string city, string street, string house, string apartment,
		string mark, string model, string licensePlate,
		string nameComp, string positionComp
	)
	{

		this->name.name = name;
		this->name.surname = surname;
		this->name.patronymic = patronymic;

		this->birthday.day = day;
		this->birthday.mounth = mounth;
		this->birthday.year = year;

		this->phone = phone;

		this->addres = new Address(country, city, street, house, apartment);
		this->company = new Company(mark, model, licensePlate);
		this->car = new Car(nameComp, positionComp);
		//мне показывает тут ошибку чекни плес
	}

	card(FIO fio, Date birthday, string phone, Address *address, Car* car, Company* company) {
		this->name = fio;
		this->birthday = birthday;
		this->addres = addres;
		this->car = car;
		this->company = company;
	}
		
};
