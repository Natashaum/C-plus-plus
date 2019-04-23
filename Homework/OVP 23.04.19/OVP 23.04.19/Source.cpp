#include <iostream>
#include <string>
using namespace std;

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
private:
	string accountNumber;
	string name;
	string surname;
	int money;
	string currency;
public:
	void ShowInfo() {
		cout << "Account number:         " << accountNumber << "\nUser name:              " << name << "\nUser surname:           " << surname <<"\nBalance:                " << money << "\nThe name of currency:   " << currency << endl;
	}
	void ShowBalance() {
		cout << "Balance:   " << money << currency << endl;
	}
	void SetAccountNum(string newAccountNum) {
		accountNumber = newAccountNum;
	}
	void SetName(string newName) {
		name = newName;
	}
	void SetSurname(string newSurname) {
		surname = newSurname;
	}
	void SetCurrency(string newCurrency) {
		currency = newCurrency;
	}
	void SetMoney(int newMoney)
	{
		money = newMoney;
	}
	void AddMoney(int addMoney)
	{
		money += addMoney;
	}
	void SubMoney(int subMoney)
	{
		money -= subMoney;
	}
	int GetMoney()
	{
		return money;
	}

};



int main() {
	string UserAccountNum;
	string username;
	string userSurname;
	string currency;
	int money = 0;
	int addMoney;
	int subMoney;
	cout << " Enter your account number:\n";
	cin >> UserAccountNum;
	cout << " Enter Username:\n";
	cin >> username;
	cout << " Enter user Surname:\n";
	cin >> userSurname;
	cout << " Enter amount of money:\n";
	cin >> money;
	cout << " Enter currency:\n";
	cin >> currency;
	BankAccount User;
	User.SetAccountNum(UserAccountNum);
	User.SetName(username);
	User.SetSurname(userSurname);
	User.SetMoney(money);
	User.SetCurrency(currency);
	cout << "====================================================\n";
	User.ShowInfo();
	cout << "====================================================\n";
	for (;;) {
		int choice;
		
		cout << " Press:\n1 - To watch your balance\n2 - To Add Money\n3 - To Subtract Money\n0 - To Exit!" << endl;
		cin >> choice;
		if (choice == 0) {
			break;
		}
		switch (choice) {
		
		case 1:
			cout << " Your current balance is:\n";
			User.SetMoney(money);
			cout << "--------------------------------" << endl;
			User.ShowBalance();
			break;

		case 2:
			cout << " Enter amount of money you want to Add:\n";
			cin >> addMoney;
			User.AddMoney(addMoney);
			cout << "--------------------------------" << endl;
			User.ShowInfo();
			break;
		case 3: 
			cout << " Enter amount of money you want to Subtract:\n";
			cin >> subMoney;
			if (User.GetMoney() < subMoney) {
				cout << " There is not enough money!" << endl;
			}
			else  {
				User.SubMoney(subMoney);
				cout << "--------------------------------" << endl;
				User.ShowInfo();
			}
			break;
		}
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}