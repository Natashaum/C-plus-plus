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

void Menu() {
	int choice = 0;
	cout << " Press 1 - if you want to lon in with a card number" << endl;
	cout << " Press 2 - if you want to lon in using a password" << endl;
	cout << " Press 3 - if you want to lon in with a phone number" << endl;
	for (int i = 0; i < 3; i++) {
		if (choice == 1) {
			cout << " Enter your card number " << endl;
		}
		else if (choice == 2) {
			cout << " Enter your password " << endl;
		}
		else if (choice == 3) {
			cout << " Enter your phone number " << endl;
		}
	}
}

int main() {

	system("pause");
	return 0;
}