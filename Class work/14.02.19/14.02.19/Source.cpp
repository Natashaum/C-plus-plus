#include <iostream>
#include <ctime>
using namespace std;

// 1. Сгенерировать десять массивов из случайных чисел. Вывести их и сумму их элементов на экран.
//    Найти среди них один с максимальной суммой элементов. Указать какой он по счету, повторно вывести этот массив и сумму его элементов.
//    Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.
/*template<typename T>
void FillArr( T arr) {
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
	}
}
template<typename T>
void PrintArr(T arr) {
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "   ";
	}
}
int Sum(int arr[]) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	srand(unsigned(time(NULL)));
	int arr[10];
	int sum = 0;
	int MaxArr = 0;
	int MaxI = 0;
	for (int i = 0; i < 10; i++) {
		FillArr(arr);
		cout << "Array [" << i << "]    ";
		PrintArr(arr);
		cout << endl;
		cout << "Array Sum: ";
		cout << Sum(arr);
		cout << endl << "---------------------------------------------------------" << endl;
		if (Sum(arr) > MaxArr) {

			MaxArr = Sum(arr);
			MaxI = i;

		}
	}
	cout << "=========================================================" << endl;
	cout << " Max Array [" << MaxI << "] =  " << MaxArr <<  endl << "=========================================================" << endl;

	system("pause");
	return 0;
}*/

//  2. Банкомат.Реалізувати перевантажені функції там, де це необхідно.
//    - Є реєстрація користувача (логін по номеру карти (масив  int), пароль(масив int), або логін по номеру телефону(масив int)).
//    - Вхід в аккаунт через логін і пароль або через логін    і    номер телефону(масив int).
//
//    - Переказ грошей або на картку або на телефон.
//    - Вивід грошей або ціле число(передати int) або дробове число(передати double).Перевірити баланс(на екра).


int Menu() {
	int choice = 0;

	cout << " Press 1 - to Log in with a \"Card number\"!" << endl;
	cout << " Press 2 - to Log in with a \"Phone number\"!" << endl;
	cout << " Press 3 - to \"Exit\"!" << endl;
	cin >> choice;
	cout << " Your choice is: " << choice << endl;

	if (choice == 1) {
		cout << " \"Enter your card number\" " << endl;
	}
	else if (choice == 2) {
		cout << " \"Enter your phone number\" " << endl;
	}
	else if (choice == 3) {
		cout << " \"Have a nice day! Bye!\"" << endl;
	}
	else {
		cout << " \"You have done incorrect choice!\"\n  \t \"Try again\"" << endl;
	}

	return choice;
}

void FillCardNum(int arr[]) {

	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

}
void PrintCardNum(int arr[]) {

	cout << " Card number: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "  ";
	}
}
void FillPass(int arr[]) {
	cout << "Enter your Password : " << endl;
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
}
void PrintPass(int arr[]) {
	cout << " Password: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "  ";
	}
}
void FillPhoneNum(int arr[]) {

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
}
void PrintPhoneNum(int arr[]) {

	cout << " Phone Number: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "  ";
	}
}


bool CheckCard(int arr[], int card[])
{
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] != card[i])
		{
			return false;
		}
	}
	return true;
}

bool CheckPhoneNum(int arr[], int phoneNum[])
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != phoneNum[i])
		{
			return false;
		}
	}
	return true;
}

bool CheckPassword(int arr[], int card[])
{
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] != card[i])
		{
			return false;
		}
	}
	return true;
}

void FillBall(int arr[]) {
	for (int i = 0; i < 4; i++) {
		arr[i] = rand() % 10000;
	}
}
void FillBall(double arr[]) {
	for (int i = 0; i < 4; i++) {
		arr[i] = rand() % 10000;
	}
}

int main() {
	srand(unsigned(time(NULL)));

	int cards[4][4] = { { 5356, 7467, 6457, 2553 },
						{ 5456, 7467, 6457, 2553 },
						{ 5556, 7467, 6457, 2553 },
						{ 7556, 7467, 6457, 2553 } };

	int passwords[4][4] = { { 5, 3, 5, 6 },
							{ 2, 5, 5, 3 },
							{ 2, 5, 5, 3 },
							{ 7, 5, 5, 6 } };

	int phoneNum[4][10] = { {0,6,7,3,5,6,8,4,7,8},
							{0,5,0,2,6,6,4,5,5,8},
							{0,5,0,2,5,5,3,5,6,8},
							{0,9,5,7,5,5,6,3,6,2} };

	int balances[4];
	FillBall(balances);

	int numberCard = -1;
	int indexPhoneNum = -1;

	double sum;
	int choice = 0;
	int arr1[4];
	int arr2[4];
	int arr3[10];


	for (;;)
	{
		choice = Menu();
		if (choice == 1) {
			FillCardNum(arr1);
			PrintCardNum(arr1);
			cout << endl;

			for (int i = 0; i < 4; i++)
			{
				if (CheckCard(arr1, cards[i]))  // (CheckCard(arr1, cards[i])) - ф-я перевірки номерів карток; cards[i] - значення однієї з карток;
				{
					numberCard = i;  // numberCard -  присвоїли порядковий номер масиву; 
					break;
				}
			}

			if (numberCard != -1)
			{
				FillPass(arr2);
				PrintPass(arr2);
				cout << endl;

				if (CheckPassword(arr2, passwords[numberCard]))  // (CheckCard(arr2, passwords[numberCard])) - ф-я перевірка паролів; [numberCard] - порядковий номер одного із масивів  карток;
				{
					cout << " Your balance is: " << balances[numberCard] << endl;
					cout << "   Enter:\n   1 - To Withdraw Money! (-)\n   2 - To Refill the Account! (+)\n   3 - To Exit:" << endl;
					cin >> choice;
					cout << "Enter the Sum: " << endl;
					cin >> sum;
					if (choice == 1)
					{
						balances[numberCard] -= sum;
						cout << "Your current balance is: " << balances[numberCard] << endl;
					}
					else if (choice == 2)
					{
						balances[numberCard] += sum;
						cout << "Your current balance is: " << balances[numberCard] << endl;
					}
				}
				else
				{
					cout << "Your password is incorrect!!!\n\t\"Try again!\"" << endl;
				}
			}
			else
			{
				cout << "Card number is incorrect!!! \n\t\"Try again\"" << endl;
			}
		}
		else if (choice == 2) {
			FillPhoneNum(arr3);
			PrintPhoneNum(arr3);
			cout << endl;

			for (int i = 0; i < 4; i++)
			{
				if (CheckPhoneNum(arr3, phoneNum[i]))  // (CheckPhoneNum(arr3, phoneNum[i])) - ф-я перевірки номерів телефонів; cards[i] - значення одного з номерів телефонів
				{
					indexPhoneNum = i;  // indexPhoneNum -  присвоїли порядковий номер масиву; 
					break;
				}
			}

			if (indexPhoneNum != -1)
			{
				FillPass(arr2);
				PrintPass(arr2);
				cout << endl;

				if (CheckPassword(arr2, passwords[indexPhoneNum]))
				{
					cout << "Your password is correct!\n Your balance is: " << balances[indexPhoneNum] << endl;
					cout << "   Enter:\n   1 - To Withdraw Money! (-)\n   2 - To Refill the Account! (+)\n   3 - To Exit:" << endl;
					cin >> choice;
					cout << "Enter sum: " << endl;;
					cin >> sum;
					if (choice == 1)
					{
						balances[indexPhoneNum] -= sum;
						cout << "Your current balance is: " << balances[indexPhoneNum] << endl;
					}
					else if (choice == 2)
					{
						balances[indexPhoneNum] += sum;
						cout << "Your current balance is: " << balances[indexPhoneNum] << endl;
					}
				}
				else
				{
					cout << "Your password is incorrect!!!\n\t\"Try again!\"" << endl;
				}
			}
			else
			{
				cout << "Phone number is incorrect!!!\n\t\"Try again!\"" << endl;
			}
		}
		system("pause");
		system("cls");
	}



	system("pause");
	return 0;
}