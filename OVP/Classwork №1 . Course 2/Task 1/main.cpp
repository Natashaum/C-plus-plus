#include <iostream>

const int SIZE = 30;

using std::cout;
using std::cin;

void ClearBuffer();

struct Game
{
	char name[SIZE];
	unsigned year;
	char category[SIZE];

	void InputGame()
	{
		ClearBuffer();
		cout << "Enter name\n";
		cin.getline(name, SIZE);

		do
		{
			cout << "Enter year of issue\n";
			cin >> year;

			ClearBuffer();

		} while (year <= 1900);

		ClearBuffer();
		cout << "Enter category of game\n";
		cin.getline(category, SIZE);
	}

	void PrintGame()
	{
		cout << "Name		 : " << name << '\n';
		cout << "Year		 : " << year << '\n';
		cout << "Category	 : " << category << '\n';
	}
};

int main()
{
	Game* games = nullptr;
	Game* temp;
	Game game;
	char choice;
	int amount = 0;

	do
	{
		cout << "1)  Enter new game\n";
		cout << "2)  Show games\n";
		cout << "0)  Exit\n";
		cin >> choice;

		ClearBuffer();

		system("cls");

		switch (choice)
		{
		case '1':
			game.InputGame();
			temp = new Game[amount + 1];
			for (int i = 0; i < amount; i++)
				temp[i] = games[i];

			temp[amount++] = game;

			delete[] games;
			games = temp;
			break;
		case '2':
			if (amount > 0)
			{
				for (int i = 0; i < amount; i++)
				{
					cout << "Info about " << i + 1 << " game\n";
					games[i].PrintGame();
				}
			}
			else
				cout << "List is empty\n";
			break;
		case '0':
			cout << "Goodbye\n";
			break;
		default:
			break;
		}

		system("cls");
	} while (choice != '0');
	system("pause");
	return 0;
}

void ClearBuffer()
{
	if (!cin)
		while (cin.get() != '\n')
			cin.clear();
}
