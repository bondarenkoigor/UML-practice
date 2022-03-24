#include <iostream>
#include <string>
#include"Contacts.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	Contacts contacts;
	unsigned int check;
	do {
		system("cls");
		cout << "1 - ���������� ��������\n";
		cout << "2 - �������� �������� �� �����\n";
		cout << "3 - ����� �������� �� �����\n";
		cout << "4 - ����� �������� �� ������ ��������\n";
		cout << "5 - ���������� �� �����\n";
		cout << "6 - ���������� �� ������ ��������\n";
		cout << "7 - ������ ���������\n";
		cout << "8 - ��������� ���������� � ��������\n";
		cout << "0 - �����\n";
		cin >> check;
		cin.ignore();
		switch (check)
		{
		case 1: {
			string name, lastName, patronymic;
			cout << "������� ��� ";
			getline(cin, name);
			cout << "������� ������� ";
			getline(cin, lastName);
			cout << "������� �������� ";
			getline(cin, patronymic);
			int d, m, y;
			cout << "������� ���� �������� (d/m/y) ";
			cin >> d >> m >> y;
			string number;
			cin.ignore();
			cout << "������� ����� �������� ";
			getline(cin, number);
			string country, city, street, house, apartment;
			cout << "������� ������ ���������� ";
			getline(cin, country);
			cout << "������� ����� ���������� ";
			getline(cin, city);
			cout << "������� ����� ���������� ";
			getline(cin, street);
			cout << "������� ��� ���������� ";
			getline(cin, house);
			cout << "������� �������� ���������� ";
			getline(cin, apartment);
			string mark, model, licensePlate;
			cout << "������� ����� ������ ";
			getline(cin, mark);
			cout << "������� ������ ������ ";
			getline(cin, model);
			cout << "������� ������ ������ ";
			getline(cin, licensePlate);
			string companyName, position;
			cout << "������� �������� ";
			getline(cin, companyName);
			cout << "������� ��������� ";
			getline(cin, position);
			contacts.addContact(Contact(Name(name, lastName, patronymic), Date(d, m, y), number, Address(country, city, street, house, apartment), Car(mark, model, licensePlate), Company(companyName, position)));
			break;
		}
		case 2:
		{
			string name, lastName, patronymic;
			cout << "������� ���: ";
			getline(cin, name);
			getline(cin, lastName);
			getline(cin, patronymic);
			contacts.deleteContact(Name(name, lastName, patronymic));
			break;
		}
		case 3:
		{
			string name, lastName, patronymic;
			cout << "������� ���: ";
			getline(cin, name);
			getline(cin, lastName);
			getline(cin, patronymic);
			contacts.searchByName(Name(name, lastName, patronymic));
			break;
		}
		case 4:
		{
			string phone;
			cout << "������� ����� �������� ";
			getline(cin, phone);
			contacts.searchByPhone(phone);
			break;
		}
		case 5:
		{
			contacts.sortByName();
			break;
		}
		case 6:
		{
			contacts.sortByPhone();
			break;
		}
		case 7:
		{
			contacts.printAll();
			break;
		}
		case 8:
		{
			std::cout << "������� ����� ������� ��������: ";
			int index;
			cin >> index;
			if (index >= contacts.getSize()) break;
			cin.ignore();
			contacts.print(index);
			break;
		}
		}
		system("pause");
	} while (check != 0);


}
