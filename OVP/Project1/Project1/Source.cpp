#include<iostream>
#include<iomanip>
#include<ctime>
#include<string>
//#include<stdlib.h>
//#include<fstream>
using namespace std;

enum Currency { EURO = 'E', DOLL = 'D', UAH = 'G' };
class Account
{
	int number;
	int balance;
	Currency currency;
public:
	void open()
	{
		
		cout << "Input number: ";
		cin >> number;
		
		bool ind = false;
		do {
			
			cout << "E-EURO\nD-DOLLAR\nG-UAH\n" << endl;
			char c;
			cin >> c;

			if (c=='E'|| c=='e'||c=='D'|| c == 'd' || c== 'G' || c == 'g')
			{
				currency = Currency(c);
				ind = true;

			}
			else 
			{
				cout << "try again" << endl; 
				cout << "E-EURO\nD-DOLLAR\nG-UAH\n" << endl;
				cin >> c;
			}
		} while (!ind);
	}

	void InputBallance()
	{
		
		cout << "Input balance: ";
		cin >> balance;
	}
	void PrintAccount()
	{
		cout << "Number: " << number << endl;
		cout << "Balance: " << balance << endl;
	}
	void ChangeBalance_in_minor()
	{
		int money;
		cout << "how much do u wanna take the money: ";
				bool ind_1 = false;
				do
				{
		
					cin >> money;
					if (money <= balance)
					{
						ind_1 = true;
						balance -= money;
					}
					else { cout << "u cant take such more 'coz u have got " << money << " try again" << endl; }
		
				} while (!ind_1);
	}


	void ChangeBalance_in_najor()
	{
		int money;
		cout << "how much do u wanna add the money: ";
			cin >> money;
			balance += money; 
	}



};

int main()
{
	
	Account c;
	c.open();
	c.InputBallance();
	system("cls");
	c.PrintAccount();
	
	c.ChangeBalance_in_minor();
	c.ChangeBalance_in_najor();
	c.PrintAccount();

	system("pause");
}



//int menu;
//int money;
//
//do {
//	cout << "decrise money-1 and add money - 2 also 0- exit" << endl;
//	cin >> menu;
//	switch (menu)
//	{
//	case 1:
//	{
//		cout << "how much do u wanna take the money: ";
//		bool ind_1 = false;
//		do
//		{
//
//			cin >> money;
//			if (money <= balance)
//			{
//				ind_1 = true;
//				balance -= money;
//			}
//			else { cout << "u cant take such more 'coz u have got " << money << " try again" << endl; }
//
//		} while (!ind_1);
//		break;
//
//
//
//	}
//	case 2:
//	{
//		cout << "how much do u wanna add the money: ";
//		cin >> money;
//		balance += money; break;
//	}
//
//	case 0: cout << "exit" << endl; break;
//
//	}
//} while (menu != 0);

