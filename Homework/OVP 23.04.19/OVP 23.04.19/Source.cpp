#include <iostream>
#include <string>
using namespace std;
/*class car {
public:
	string model;
	float power;
	string colour;
	int weight;
	string RegNumber;

	void ShowCarInfo() {  // маємо робити в середині класу
		cout << "Model:    " << model << "\nPower:    " << power << "\nWeight:   " << weight << "\nRegNumber:" << RegNumber << endl;  // замість cout в int

	}
};


int main() {
	cout << "Mersedes" << "\n-------------------------------------------" << endl;
	car Mersedes;  //car - клас, Mersedes - об'єкт класу
	Mersedes.model = "A 140";
	Mersedes.power = 1.6;
	Mersedes.weight =1500;
	Mersedes.RegNumber = "1200 AA";
	Mersedes.ShowCarInfo();
	////cout << "Model:    " << Mersedes.model << "\nPower:    " << Mersedes.power << "\nWeight:   " << Mersedes.weight << "\nRegNumber:" << Mersedes.RegNumber << endl;
	cout << "============================================" << endl;
	cout << "Mersedes" << "\n-------------------------------------------" << endl;
	Mersedes.model = "280"; //при зміні даних, виводиться на екран нові дані

	Mersedes.ShowCarInfo();
	////cout << "Model:    " << Mersedes.model << endl;

	cout << "=============================================" << endl;
	cout << "BMV" << "\n-------------------------------------------" << endl;
	car BMV;  //car - клас, Mersedes - об'єкт класу
	BMV.model = "A 150";
	BMV.power = 2.5;
	BMV.weight = 2000;
	BMV.RegNumber = "1200 BA";
	BMV.ShowCarInfo();

	cout << "=============================================" << endl;
	cout << "BMV" << "\n-------------------------------------------" << endl;
	BMV.power = 3.1;
	BMV.ShowCarInfo();
	cout << "=============================================" << endl;
	system("pause");
	return 0;
}*/


//ООП
//Завдання 2. Домашнє завдання
//Написати клас "Банківський рахунок" (Account), який містить :
//Номер рахунку
//Розмір коштів на рахунку
//Назва валюти рахунку(рублі, гривні, евро тощо), для позначення якої можна скористатись одним символом : R, G, E, $ тощо
//Забезпечити можливість :
//Відкривати рахунок та первинно вносити гроші на рахунок
//Знімати гроші з рахунку
//Докладати гроші на рахунок
class BankAccount {
public:
	int accountNumber;
	string userName;
	string userSurname;
	int sumMoney;
	string moneyName;
	void ShowInfo() {
		cout << "Account number:        " << accountNumber << "\nUser name:             " << userName << "\nUser surname:          " << userSurname <<"\nAmount of money:       " << sumMoney << "\nThe name of currency:  " << moneyName << endl;
	}
};



int main() {
	BankAccount account;
	account.accountNumber = 555777888;
	account.userName = "Anna";
	account.userSurname = "Glain";
	account.sumMoney = 10500;
	account.moneyName = "HRN";
	account.ShowInfo();

	BankAccount account;
	account.accountNumber = 111333222;
	account.userName = "Tom";
	account.userSurname = "Tomson";
	account.sumMoney = 5000;
	account.moneyName = "$";
	account.ShowInfo();

	
	system("pause");
	return 0;
}