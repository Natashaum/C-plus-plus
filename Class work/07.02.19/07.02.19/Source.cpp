/*#include <iostream>
using namespace std;
   
template <typename T1, typename T2>
void Sum(T1 a, T2 b) {
	cout << a << endl;
	cout << b << endl;
}
int main() {
	Sum(5, 6);
	Sum(5.8, 2.1);
	Sum("Bill", "Vasil");
	Sum(5, 8.5);
	Sum(8.5, 5);
	system("pause");
	return 0;
}*/

/*#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 Sum(T1 a, T2 b) {
	return a + b;
}


template <typename T1, typename T2>
T2 Sum(T1 a, T2 b, T1 c) {
	return a + b + c;
}
int main() {
	cout << Sum (5.5, 8) << endl;
	cout << Sum (5, 5.2, 100) << endl;
	system("pause");
	return 0;
}*/

/*1. Написати наступні функції, які в якості параметра приймають двохвимірний масив і його розмірності.
     Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5.
     функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні[1..30]
     шаблонну функцію Print(), яка виводить елементи масиву на екран в вигляді матриці
     функцію, яка заміняє всі парні елементи нулями  */

#include <iostream>
#include <ctime>
using namespace std;

const int Row = 3;
const int Col = 4;

void FillArray(int arr[Row][Col], const int Row, const int Col) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
	        arr[i][j] = rand() % 30 + 1;
		}
	}
}

void PrintArray(int arr[Row][Col], const int Row, const int Col) {
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			cout << arr[i][j] <<"   ";
		}
	}
}

int main() {
	srand(unsigned(time(NULL)));
	int arr[Row][Col];
	FillArray(arr, Row, Col);
	PrintArray(arr, Row, Col);
	//cout << arr[Row][Col] << "  " <<endl;
	system("pause");
	return 0;
}


