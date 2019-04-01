#include <iostream>
#include <string>

using namespace std;

// Написати програму, яка реалізує телефонну книгу з вказаною користувачем кількістю абонентів і всіма необхідними функціями. Використати вкладені структури (для адреси чи ПІБ). 

struct Address {
	string street;
	int houseNum;
	int flatNum;
};
struct Person {
	string name;
	string surname;
	Address address;
};
struct TelDirectory {
	Person* people;
	int peopleNumber;

	void FillPeople()
	{
		for (int i = 0; i < peopleNumber; i++)
		{
			cout << "Fill person #" << i + 1 << ":" << endl;
			cout << " Enter name: ";
			cin >> people[i].name;
			cout << " Enter surname: ";
			cin >> people[i].surname;
			cout << " Enter address street: ";
			cin >> people[i].address.street;
			cout << " Enter address house number: ";
			cin >> people[i].address.houseNum;
			cout << " Enter address flat number: ";
			cin >> people[i].address.flatNum;
		}
	}

	void PrintPeople()
	{
		for (int i = 0; i < peopleNumber; i++)
		{
			cout << "Person #" << i + 1 << ":" << endl;
			cout << " Name: " << people[i].name << endl;
			cout << " Surname: " << people[i].surname << endl;
			cout << " Address street: " << people[i].address.street << endl;
			cout << " Address house number: " << people[i].address.houseNum << endl;
			cout << " Address flat number: " << people[i].address.flatNum << endl;
		}
	}
};

int main() {
	TelDirectory telDirectory;

	cout << "Enter number of persons: ";
	cin >> telDirectory.peopleNumber;

	telDirectory.people = new Person[telDirectory.peopleNumber];   //виділення пам*яті під новий динамічний масив
	
	telDirectory.FillPeople();
	telDirectory.PrintPeople();
	
	system("pause");
	return 0;
}