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

int SIZE = 5;

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

void SwapPeople(Person& person1, Person& person2) // ф-я для зміни місцями даних (для використання у ф-ях сортування)
{
	Person tempPerson;

	tempPerson.surname = person1.surname;
	tempPerson.name = person1.name;
	tempPerson.birthDay = person1.birthDay;
	tempPerson.birthMonth = person1.birthMonth;
	tempPerson.birthYear = person1.birthYear;

	person1.surname = person2.surname;
	person1.name = person2.name;
	person1.birthDay = person2.birthDay;
	person1.birthMonth = person2.birthMonth;
	person1.birthYear = person2.birthYear;

	person2.surname = tempPerson.surname;
	person2.name = tempPerson.name;
	person2.birthDay = tempPerson.birthDay;
	person2.birthMonth = tempPerson.birthMonth;
	person2.birthYear = tempPerson.birthYear;
}

void SortPeopleBySurname(Person*& people)  // Person*& - посилання на вказівник на структуру // people - масив людей
{
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++)
		{
			if (_strcmpi(people[j].surname.c_str(), people[j + 1].surname.c_str()) > 0) // _strcmpi (вбудована ф-я з бібліотеки) порівнює рядки згідно таблиці ASCII
																						// c_str (вбудована ф-я з бібліотеки) переводить string в char* (тому що ф-я _strcmpi не приймає string )
			{
				SwapPeople(people[j], people[j + 1]);
			}
		}
	}
}

void SortPeopleByName(Person * &people)
{
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++)
		{
			if (_strcmpi(people[j].name.c_str(), people[j + 1].name.c_str()) > 0)
			{
				SwapPeople(people[j], people[j + 1]);
			}
		}
	}
}

void PrintPeopleByBirthMonth(Person * people, int month) {
	bool isPerson = false;
	for (int i = 0; i < SIZE; i++) {
		if (people[i].birthMonth == month)
		{
			isPerson = true;
			people[i].ShowPerson();
		}
	}
	if (isPerson == false)
	{
		cout << "Person doen't exist!" << endl;
	}
}

void CopyPerson(Person & person1, Person person2) // копіює дані з одної змінної Person в іншу //ф-я для перезаписування(зміни) даних
{
	person1.surname = person2.surname;   
	person1.name = person2.name;
	person1.birthDay = person2.birthDay;
	person1.birthMonth = person2.birthMonth;
	person1.birthYear = person2.birthYear;
}

void AddPersonToPeople(Person * &people, Person person)
{
	Person* newPeople = new Person[SIZE + 1];
	for (int i = 0; i < SIZE; i++)
	{
		CopyPerson(newPeople[i], people[i]);
	}
	CopyPerson(newPeople[SIZE], person);

	delete[] people;
	people = newPeople;
	SIZE++;
}

void RemovePersonFromPeople(Person * &people, int index)
{
	Person* newPeople = new Person[SIZE - 1];

	for (int i = 0; i < index; i++)
	{
		CopyPerson(newPeople[i], people[i]);
	}
	for (int i = index + 1; i < SIZE; i++)
	{
		CopyPerson(newPeople[i - 1], people[i]);
	}

	delete[] people;
	people = newPeople;
	SIZE--;
}

void EditPersonInPeople(Person * &people, int index, Person person)
{
	people[index].surname = person.surname;
	people[index].name = person.name;
	people[index].birthDay = person.birthDay;
	people[index].birthMonth = person.birthMonth;
	people[index].birthYear = person.birthYear;
}

void SearchPersonByName(Person * people, string name)
{
	for (int i = 0; i < SIZE; i++) {
		if (people[i].name.find(name) != string::npos) // Якщо people[i].name не містить name, тоді функція повертає string::npos
		{
			people[i].ShowPerson();
		}
	}
}

void SearchPersonBySurname(Person * people, string surname)
{
	for (int i = 0; i < SIZE; i++) {
		if (people[i].surname.find(surname) != string::npos) // find - функція, яка перевіряє наявність строки в строці
		{
			people[i].ShowPerson();
		}
	}
}

void Menu() {
	enum Choice {
		Fill = 1, Print = 2, SortBySurname = 3, SortByName = 4, PrintByBirthMonth
		= 5, AddPerson = 6, EditPerson = 7, RemovePerson = 8, SearchBySurname = 9, SearchByName = 10, Exit = 0
	};
	Person* people = new Person[5];

	Person tempPerson;
	string name;
	string surname;
	int choice;
	int month;
	int index;

	for (;;)
	{
		cout << " Make your choice: " << endl;
		cout << " Press:\n 0 - to Exit!\n 1 - to fill information!!! (Compulsory!!!)\n 2 - to print information\n 3 - to Sort by surname\n 4 - to Sort by name\n 5 - to find the person by month\n 6 - to Add person\n 7 - to Edit person\n 8 - to Remove person\n 9 - to Search by surname\n 10 - to Search by name" << endl;
		cin >> choice;
		switch (choice) {
		case Choice::Fill:
			FillPeople(people);
			cout << "Filled!" << endl;
			break;
		case Choice::Print:
			PrintPeople(people);
			break;
		case Choice::SortBySurname:
			SortPeopleBySurname(people);
			cout << "Sorted by surname!" << endl;
			cout << "------------------" << endl;
			PrintPeople(people);
			break;
		case Choice::SortByName:
			SortPeopleByName(people);
			cout << "Sorted by name!" << endl;
			cout << "------------------" << endl;
			PrintPeople(people);
			break;
		case Choice::PrintByBirthMonth:
			cout << "Enter month: \n";
			cout << "------------------" << endl;
			cin >> month;
			PrintPeopleByBirthMonth(people, month);
			break;
		case Choice::AddPerson:
			cout << "Enter name: ";
			cin >> tempPerson.name;
			cout << "Enter surname: ";
			cin >> tempPerson.surname;
			cout << "Enter birth day: ";
			cin >> tempPerson.birthDay;
			cout << "Enter birth month: ";
			cin >> tempPerson.birthMonth;
			cout << "Enter birth year: ";
			cin >> tempPerson.birthYear;
			AddPersonToPeople(people, tempPerson);
			PrintPeople(people);
			break;
		case Choice::EditPerson:
			PrintPeople(people);
			cout << "Enter index: ";
			cin >> index;
			cout << "Enter name: ";
			cin >> tempPerson.name;
			cout << "Enter surname: ";
			cin >> tempPerson.surname;
			cout << "Enter birth day: ";
			cin >> tempPerson.birthDay;
			cout << "Enter birth month: ";
			cin >> tempPerson.birthMonth;
			cout << "Enter birth year: ";
			cin >> tempPerson.birthYear;
			EditPersonInPeople(people, index, tempPerson);
			PrintPeople(people);
			break;
		case Choice::RemovePerson:
			PrintPeople(people);
			cout << "Enter index: ";
			cin >> index;
			RemovePersonFromPeople(people, index);
			PrintPeople(people);
			break;
		case Choice::SearchBySurname:
			cout << "Enter surname: ";
			cin >> surname;
			SearchPersonBySurname(people, surname);
			break;
		case Choice::SearchByName:
			cout << "Enter name: ";
			cin >> name;
			SearchPersonByName(people, name);
			break;
		}
		if (choice == Choice::Exit)
		{
			break;
		}

		cout << "====================================" << endl;
		system("pause");
		system("cls");
	}

	delete[] people;
}

int main() {
	Menu();

	system("pause");
	return 0;
}