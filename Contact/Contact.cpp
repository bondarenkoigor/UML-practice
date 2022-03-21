#include <iostream>
#include <string>
using namespace std;
int main()
{


	unsigned int check;
	do {

		cout << "1 - Добавление контакта";
		cout << "2 - Удаление контакта по имени";
		cout << "3 - Удаление контакта по фамилии";
		cout << "4 - Поиск контакта по имени";
		cout << "5 - Поиск контакта по фамилии";
		cout << "6 - Сортировка по имени";
		cout << "7 - Сортировка по фамилии";
		cout << "0 - Выход";
		cin >> check;

//всё окей? оно у меня не работает, текст исчезает, который я печатаю
	// card.h появился? + попробуй там что-то
		switch (check)
		{
		case 1:{
			string name;
			string lastName;
			string patronymic;
			cin.ignore();
			cout << "Введите имя ";
			getline(cin, name);
			cout << "Введите фамилию ";
			getline(cin, lastName);
			cout << "Введите отчество ";
			getline(cin, patronymic);
			int d,m,y;
			cout << "Введите дату рождения (d/m/y) ";
			cin >> d >> m >> y;
			string number;
			cin.ignore();
			cout << "Введите номер телефона ";
			getline(cin, number);
			string country;
			string city;
			string street;
			string house;
			string apartment;
			cout << "Введите страну проживания ";
			getline(cin, country);
			cout << "Введите город проживания ";
			getline(cin, city);
			cout << "Введите улицу проживания ";
			getline(cin, street);
			cout << "Введите дом проживания ";
			getline(cin, house);
			cout << "Введите квартиру проживания ";
			getline(cin, apartment);
			string mark;
			string model;
			string licensePlate;
			cout << "Введите марку машины ";
			getline(cin, mark);
			cout << "Введите модель машины ";
			getline(cin, model);
			cout << "Введите номера машины ";
			getline(cin, licensePlate);
			string companyName;
			string position;
			cout << "Введите компанию ";
			getline(cin, companyName);
			cout << "Введите компанию ";
			getline(cin, position);
			//create contact
			break;
		}
		case 2:
		{
			string name;
			cin.ignore();
			cout << "Введите имя ";
			getline(cin, name);
			//delete contact by name
	    	break;
		}
		case 3:
				{
			string lastName;
			cin.ignore();
			cout << "Введите имя ";
			getline(cin, lastName);
			//delete contact by last name
	    	break;
		}
		case 4:
		{
			string name;
			cin.ignore();
			cout << "Введите имя ";
			getline(cin, name);
			//find contact by name
	    	break;
		}
		case 5:
		{
			string lastName;
			cin.ignore();
			cout << "Введите имя ";
			getline(cin, lastName);
			//find contact by lastname
	    	break;
		}
		case 6:
		{
			string name;
			cin.ignore();
			cout << "Введите имя ";
			getline(cin, name);
			//sort contacts by name
	    	break;
		}
		case 7:
		{
			string lastName;
			cin.ignore();
			cout << "Введите имя ";
			getline(cin, lastName);
			//sort contacts by lastname
	    	break;
		}
		}
	} while (check != 0);

	
}
