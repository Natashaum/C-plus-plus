/*
Написати клас "Банківський рахунок" (Account), який містить:
	Номер рахунку
	Розмір коштів на рахунку
	Назва валюти рахунку (долари, гривні, євро тощо), для позначення якої можна скористатись одним символом:
	G, E, $ чи значенням перелічувального типу тощо.

Забезпечити можливість:
	Відкривати рахунок та первинно вносити гроші на рахунок(за замовчуванням рахунок відкривати у гривнях)
	Знімати гроші з рахунку
Докладати гроші на рахунок

ПРИМІТКА! На 12 балів реалізувати також можливість здійснювати переказ грошей з одного рахунку на другий.
Візьміть до уваги, що рахунки можуть бути у різних грошових одиницях.
*/
#include <iostream>
#include <string>

using namespace std;

void ClearBuffer();

enum Currency { DOLLAR = '$', EURO = 'E', GRIVNA = 'G' };
const int SIZE = 12;

class Account
{
	char number[SIZE];
	double balance;
	Currency cur;

public:

	void FillAccount()
	{
		char choice;
		bool isCorrect = true;

		do
		{
			cin.getline(number, SIZE);

			for (int i = 0; i < strlen(number); i++)
				if (!isdigit(number[i]))
					isCorrect = false;

			if (!isCorrect)
				cout << "Incorrect input\n";
		} while (!isCorrect);

		do
		{

			cout << "$) to open deposit in dollar\n";
			cout << "E) to open deposit in euro\n";
			cout << "G) to open deposit in grivna\n";
			cin >> choice;

			ClearBuffer();

			switch (choice)
			{
			case '$':
				cout << "You opened deposit in dollar\n";
				cur = Currency::DOLLAR;
				break;
			case 'E':
				cout << "You opened deposit in euro\n";
				cur = Currency::EURO;
				break;
			case 'G':																																																					// Демян Бог
				cout << "You opened deposit in grivna\n";
				cur = Currency::GRIVNA;
				break;
			default:
				cout << "Incorrect input\n";
				break;
			}
		} while (choice != '$' && choice != 'E' && choice != 'G');

		do
		{
			cout << "Enter start deposit\n";
			cin >> balance;

			ClearBuffer();
		} while (balance < 0);

		cout << "Your account number is " << number << '\n';
		cout << "Balance of money on your account is " << balance << char(cur) << '\n';
	}

	void Withdraw()
	{
		int withdraw;

		do
		{
			cout << "Enter balance of money wich you want withdraw\n";
			cin >> withdraw;

			ClearBuffer();

		} while (withdraw <= 0 && withdraw > balance);

		balance -= withdraw;

		cout << "You withdraw " << withdraw << '\n';
		cout << "Your balance now : " << balance << char(cur) << '\n';
	}

	void AddMoney()
	{
		int add;

		do
		{
			cout << "Enter balance of money wich you want add\n";
			cin >> add;

			ClearBuffer();

		} while (add <= 0);

		balance += add;

		cout << "You add " << add << '\n';
		cout << "Your balance now : " << balance << char(cur) << '\n';
	}

	void PutFrom(Account& account)
	{
		int transfer;

		do
		{
			cout << "Enter amount of money wich you want transfer\n";
			cin >> transfer;

			ClearBuffer();
		} while (transfer <= 0 && transfer > account.balance);

		switch (cur)
		{
		case DOLLAR:
			switch (account.cur)
			{
			case DOLLAR:
				balance += transfer;
				account.balance -= transfer;
				break;
			case EURO:
				balance += 1.12 * transfer;
				account.balance -= transfer;
				break;
			case GRIVNA:
				balance += transfer / 26;
				account.balance -= transfer;
				break;
			}
			break;
		case EURO:
			switch (account.cur)
			{
			case DOLLAR:
				balance += transfer / 1.12;
				account.balance -= transfer;
				break;
			case EURO:
				balance += transfer;
				account.balance -= transfer;
				break;
			case GRIVNA:
				balance += transfer / 29;
				account.balance -= transfer;
				break;
			}
			break;
		case GRIVNA:
			switch (account.cur)
			{
			case DOLLAR:
				balance += 26 * transfer;
				account.balance -= transfer;
				break;
			case EURO:
				balance += 29 * transfer;
				account.balance -= transfer;
				break;
			case GRIVNA:
				balance += transfer;
				account.balance -= transfer;
				break;
			}
			break;
		}
	}

	void SetNumber()
	{
		bool isCorrect = true;

		do
		{
			cin.getline(number, SIZE);

			for (int i = 0; i < strlen(number); i++)
				if (!isdigit(number[i]))
					isCorrect = false;
			
			if (!isCorrect)
				cout << "Incorrect input\n";
		} while (!isCorrect);
	}

	char* GetNumber()
	{
		return number;
	}

	double GetBal()
	{
		return balance;
	}

	Currency GetCur()
	{
		return cur;
	}
};

int main()
{
	Account* accounts = nullptr;
	Account* temp;
	Account account, account2;
	char choice;
	bool isExist;
	int amount = 0;
	int balance;
	int index;

	do
	{
		cout << "1) Add new account\n";
		cout << "2) Add money\n";
		cout << "3) Withdraw money\n";
		cout << "4) Transfer money\n";
		cout << "5) Print all accounts\n";
		cout << "0) Exit\n";
		cin >> choice;

		switch (choice)
		{
		case '1':
			account.FillAccount();

			temp = new Account[amount + 1];
			for (int i = 0; i < amount; i++)
				temp[i] = accounts[i];

			temp[amount++] = account;

			if (accounts != nullptr)
				delete[] accounts;
			accounts = temp;
			break;
		case '2':
			cout << "Enter number of account to wich you want add money\n";
			account.SetNumber();
			
			isExist = false;

			for (int i = 0; i < amount; i++)
			{
				if (accounts[i].GetNumber() == account.GetNumber())
				{
					isExist = true;
					accounts[i].AddMoney();

					cout << "Adding succesfull\n";
					break;
				}
			}

			if (!isExist)
				cout << "Account doesn't exist\n";

			break;
		case '3':
			ClearBuffer();

			cout << "Enter number of account from wich you want withdraw money\n";
			account.SetNumber();

			isExist = false;

			for (int i = 0; i < amount; i++)
			{
				if (accounts[i].GetNumber() == account.GetNumber())
				{
					isExist = true;
					accounts[i].Withdraw();

					cout << "Withdrawing succesfull\n";
					break;
				}
			}

			if (!isExist)
				cout << "Account doesn't exist\n";

			break;
		case '4':
			cout << "Enter number of account from wich you want withdraw money\n";
			account.SetNumber();

			isExist = false;

			for (int i = 0; i < amount; i++)
			{
				if (accounts[i].GetNumber() == account.GetNumber())
				{
					index = i;
					isExist = true;
					break;
				}
			}

			if (isExist)
			{
				cout << "Enter number of account to wich you want add money\n";
				account2.SetNumber();

				if (account.GetNumber() == account2.GetNumber())
				{
					cout << "You enter identical numbers\n";
					break;
				}

				isExist = false;

				for (int i = 0; i < amount; i++)
				{
					if (accounts[i].GetNumber() == account2.GetNumber())
					{
						isExist = true;
						accounts[i].PutFrom(accounts[index]);

						cout << "Transfer succesfull\n";
						break;
					}
				}
				
				if (!isExist)
					cout << "Account doesn't exist\n";
			}
			else
				cout << "Account doesn't exist\n";

			break;

		case '5':
			for (int i = 0; i < amount; i++)
			{
				cout << "Info about " << i + 1 << "account\n";
				cout << "Number : " << accounts[i].GetNumber() << '\n';
				cout << "Balance : " << accounts[i].GetBal() << (char)accounts[i].GetCur() << '\n';
			}
		case '0':
			cout << "Goodbye\n";
			break;
		default:
			break;
		}
	} while (choice != '0');
	system("system");
	return 0;
}

void ClearBuffer()
{
	if (!cin)
	{
		while (cin.get() != '\n')
			cin.clear();
		cout << "Incorrect input\n";
	}
}