#pragma once
#include "Date.h"
#include "Name.h"
#include"Company.h"
#include"Car.h"
#include"Adress.h"
using std::string;
class Contact {

private:
	Name* name;
	Date* birthday;

	string phone;
	Address* address;

	Car* car;
	Company* company;
public:

	/*Contact(string name, string lastName, string patronymic, int day, int mounth, int year, string phone,
		string country, string city, string street, string house, string apartment,
		string mark, string model, string licensePlate,
		string nameComp, string positionComp
	)
	{
		this->name = new Name(name, lastName, patronymic);
		this->birthday = new Date(day, mounth, year);

		this->phone = phone;

		this->address = new Address(country, city, street, house, apartment);
		this->company = new Company(nameComp, positionComp);
		this->car = new Car(mark, model, licensePlate);
	}*/

	Contact(Name* fio, Date* birthday, string phone, Address* address, Car* car, Company* company) 
	{
		this->name = new Name(fio->getName(), fio->getLastName(), fio->getPatronymic());
		delete fio;
		this->birthday = new Date(birthday->getDay(), birthday->getMounth(), birthday->getYear());
		delete birthday;
		this->address = new Address(address->getCountry(), address->getCity(), address->getStreet(), address->getHouse(), address->getApartment());
		delete address;
		this->car = new Car(car->getMark(), car->getModel(), car->getLicensePlate());
		delete car;
		this->company = new Company(company->getName(), company->getPosition());
		delete company;
		this->phone = phone;
	}

	inline Name* getName() const {
		return this->name;
	}
	inline Date* getBirthday() const {
		return this->birthday;
	}
	inline string getPhone() const {
		return this->phone;
	}
	inline Address* getAdress() const {
		return this->address;
	}
	inline Car* getCar() const {
		return this->car;
	}
	inline Company* getCompany() const {
		return this->company;
	}

	~Contact()
	{
		delete name;
		delete birthday;
		delete car;
		delete company;
		delete address;
	}
		
};
