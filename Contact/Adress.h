#pragma once
#include<string>

using namespace std;
class Address {
private:
	std::string country;
	std::string city;
	std::string street;
	std::string house;
	std::string apartment;
public:
	Address(string country, string city, string street, string house, string apartment)
	{
		this->country = country;
		this->city = city;
		this->street = street;
		this->house = house;
		this->apartment = apartment;
	}

	inline getCountry() const {
		return this->country;
	}
	inline getCity() const {
		return this->city;
	}
	inline getStreet() const {
		return this->street;
	}
	inline getHouse() const {
		return this->house;
	}
	inline getApartment() const{
		return this->apartment;
	}
};
