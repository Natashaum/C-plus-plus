﻿//#include <iostream>
//#include <string>

using namespace std;
//класи пишемо за межами інта
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

//Створити клас "Точка" (Point), який складається з двох полів типу int: X та Y.Необхідно забезпечити :
//Введення координат точки користувачем
//Вивід інформації про точку на екран
//Можливість зміни будь - якої з координат на запит користувача(X або Y)
/*class Points {
public:
	int x;
	int y;

	void ShowPointInfo() {
		cout << x << " \n" << y << endl;
	}
};
int main() {
	Points coordinates; //Points - клас, coordinates - об'єкт класу
	int x = 0; //для вводу даних користувачем
	int y = 0; //для вводу даних користувачем
	cout << "Enter Point x:  ";
	cin >> x;
	cout << "Enter Point y:  ";
	cin >> y;
	coordinates.x = x;
	coordinates.y = y;
	coordinates.ShowPointInfo();
	system("pause");
	return 0;
}*/

/*class Car {
private:
	string model;
	float power;
	string engine;
	int year;

public:
	void ShowCarInfo() {
		cout << "Model:  " << model << "\nPower: " << power << "\nEngine" << year << endl;
	}
	void SetModel(string newModel) {  //щоб доступитися з int main до моделі (ф-я приймає параметри моделі)
		model = newModel;
	}
	string GetModel() {
		return model;
	}
};
int main() {
	Car mazda;
	mazda.SetModel("Mazda");
	mazda.ShowCarInfo();

	cout <<  "From GetModel function:   " << mazda.GetModel() << endl;

	mazda.SetModel("Mazda 3"); //в дужках задаємо параметри
	cout << "From GetModel function:   " << mazda.GetModel() << endl; // для виводу на екран

	system("pause");
	return 0;
}*/

# include <iostream>
# include <string>
# include <ctime>

using namespace std;

class Account {
private:
	string name;
	string surname;
	float money = 0;
	int accountNumber;

public:
	void ShowAccountInfo() {
		cout << "Account number:\t " << accountNumber << "\nName:\t\t " << name << "\nSurname:\t " << surname << "\nMoney:\t\t " << money << " UAN" << endl;
	}

	void SetName(string newName) {
		name = newName;
	}

	void SetSurname(string newSurname) {
		surname = newSurname;
	}

	void Setmoney(float newMoney) {
		money += newMoney;
	}

	void SetMinmoney(float newMoney) {
		money -= newMoney;
	}
	void SetAccountNumber() {
		accountNumber = rand() % 2000000 + 10000000;
	}
	float GetMoney()
	{
		return money;
	}
};


int main() {
	string name;
	string surname;
	float money;

	bool exit = false;

	Account PersonOne;

	cout << "Enter name" << endl;
	cin >> name;
	PersonOne.SetName(name);

	cout << "Enter surname" << endl;
	cin >> surname;
	PersonOne.SetSurname(surname);

	PersonOne.SetAccountNumber();

	while (exit == false)
	{
		cout << "Balanse = " << PersonOne.GetMoney() << " UAN" << endl;

		int choise;
		cout << "1. Put money on the account\n2. Withdraw money from the account\n3. Info\n0. Exit" << endl;
		cin >> choise;



		if (choise == 0)
		{
			exit = true;
		}
		else if (choise == 1)
		{
			cout << "Enter money" << endl;
			cin >> money;
			PersonOne.Setmoney(money);
		}
		else if (choise == 2)
		{
			cout << "Enter money" << endl;
			cin >> money;
			PersonOne.SetMinmoney(money);
		}
		else if (choise == 3)
		{
			PersonOne.ShowAccountInfo();
		}

	}
	system("pause");
	return 0;
}

