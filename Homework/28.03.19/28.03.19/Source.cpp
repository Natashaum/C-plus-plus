#include <iostream>
#include <string>

using namespace std;

//  Описати структуру «Людина».Передбачити:
//  
//  Заповнення масиву людей
//  Вивід інформації з сортуванням по прізвищу та імені
//  Вивід списку іменників місяця з вказанням дати народження
//  Зміна розміру масиву при додаванні та видаленнні записів
//  Пошук по прізвищу та імені
//  Редагування запису
//  Роботу організувати через меню. Пункти меню обовязково є типами перелічуваної константи (enum).

const int SIZE = 5;

struct Person
{
	string name;
	string surname;
	int birthDay;
	int birthMonth;
	int birthYear;
	void ShowPerson() {
		cout << "Name: " << name << "\nSurname: " << surname << "\nBirthday: " << birthDay << "." << birthMonth << "." << birthYear << endl;
		cout << "==================================================" << endl;
	}
};

void FillPeople(Person*& people)
{
	people[0].name = "Vika";
	people[0].surname = "Sydorchuk";
	people[0].birthDay = 25;
	people[0].birthMonth = 1;
	people[0].birthYear = 1995;

	people[1].name = "Ann";
	people[1].surname = "Cyprus";
	people[1].birthDay = 2;
	people[1].birthMonth = 4;
	people[1].birthYear = 1985;

	people[2].name = "Dmytro";
	people[2].surname = "Yatsyk";
	people[2].birthDay = 15;
	people[2].birthMonth = 8;
	people[2].birthYear = 1999;

	people[3].name = "Oleksandr";
	people[3].surname = "Ponomarov";
	people[3].birthDay = 5;
	people[3].birthMonth = 4;
	people[3].birthYear = 1975;

	people[4].name = "Olga";
	people[4].surname = "Kyslova";
	people[4].birthDay = 15;
	people[4].birthMonth = 1;
	people[4].birthYear = 1972;
}
void PrintPeople(Person* people) {
	for (int i = 0; i < SIZE; i++) {
		people[i].ShowPerson();
	}
}

void Menu() {
	enum Choice { Fill = 1, Print };
	Person* people = new Person[5];

	int choice;

	for (;;)
	{
		cout << " Make your choice: " << endl;
		cin >> choice;
		switch (choice) {
		case Choice::Fill:
			FillPeople(people);
			cout << "Filled!" << endl;
			break;
		case Choice::Print:
			PrintPeople(people);
			break;
		}
		cout << "====================================" << endl;
	}

	delete[] people;
}
int main() {
	Menu();

	system("pause");
	return 0;
}