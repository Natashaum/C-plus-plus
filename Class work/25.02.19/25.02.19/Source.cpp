/* #include <iostream>;
using namespace std;

int main() {
	int a = 10;
	cout << " a value " << a << "         a address" << &a << endl;
	int* PA = &a;
	cout << *PA << PA << endl;
	int& RA = a; //посилання на значення
	cout << RA << &RA << endl;
	system("pause");
	return 0;
}*/

/*# include <iostream>


using namespace std;

void FVAR(int a) {
	cout << "FVAR BEFORE a  value: " << a << " : a addr : " << &a << endl;
	a += 100;
	cout << "FVAR AFTER a  value: " << a << " : a addr : " << &a << endl;
}
void FREF(int &a) {
	cout << "FREF BEFORE a  value: " << a << " : a addr : " << &a << endl;
	a += 300;
	cout << "FREF AFTER a  value: " << a << " : a addr : " << &a << endl;
}

void FPTR(int *a) {
	cout << "FPTR BEFORE a  value: " << *a << " : a addr : " << a << endl;
	*a += 500;
	cout << "FPTR AFTER a  value: " << *a << " : a addr : " << a << endl;
}


int main() {

	int a = 10;

	cout << "main a  value: " << a << "  : a addr : " << &a << endl;
	//int *pA = &a;
	//cout << "*pA  value: " << *pA << " : *pA addr : " << pA << endl;
	//cout << "========================Before Ra==================>" << endl;

	//int &Ra = a;

	//cout << "a  value: " << a << " : a addr : " << &a << endl;
	//cout << "&Ra  value: " << Ra << " : &Ra addr : " << &Ra << endl;
	cout << "========================After Ra==================>" << endl;

	FVAR(a);
	//FREF(Ra);
	FREF(a); //FREF( Ra );
	FPTR(&a);

	cout << "main a  value: " << a << "  : a addr : " << &a << endl;

	system("pause");
	return 0;
}*/
/*# include <iostream>

using namespace std;
// Дано три числа. Оголосити посилання на ці числа.Отримати добуток трьох заданих чисел, середє арифметичне,
// найменше з них, користуючись непрямим доступом до чисел(через посилання).

void Dobutok(int &RA, int &RB, int &RC) {
	cout << "Result = " << RA * RB *RC;
}
void ArithMean(int &RA, int &RB, int &RC) {
	cout << "ArithMean = " << (RA * RB *RC) / 3;
}
void SmallestNum(int &RA, int &RB, int &RC) {
	int min = 0;
	for (int i = 0; i < 3; i++) {
		if (RA<RB||RA<RC) {
			min = RA;
		}
		else if (RB < RA || RB < RC) {
			min = RB;
		}
		else if (RC < RB || RC < RA) {
			min = RC;
		}
	}
	cout << "Min Value = " << min;
}
int main() {
	int a = 2, b = 3, c = 4;
	int &RA = a, &RB = b, &RC = c;
	Dobutok(RA, RB, RC);
	cout << endl;
	ArithMean(RA, RB, RC);
	cout << endl;
	SmallestNum(RA, RB, RC);
	cout << endl;
	system("pause");
	return 0;
}*/

// 2.  Написати функцію, яка отримує одновимірний масив і повертає ссилку на найменший елемент масиву.
//     За допомогою цієї функції вивести на екран найменший елемент та подвоїти найменший елемент масиву.
/*# include <iostream>

using namespace std;
void MinArr(int arr[], int& minArr) {
	for (int i = 0; i < 5; i++) {
		if (minArr > arr[i]) {
			minArr = arr[i];
		}
	}
}

int main() {
	int arr[5]{ 3,73,10,18,20 };
	int minArr = 1111;
	MinArr(arr, minArr);

	cout << "Min Element = " << minArr << endl;
	cout << "Min El*2 = " << minArr * 2 << endl;
	system("pause");
	return 0;
}*/
// 3. Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями.Примітка!Функція повинна повертати ссилку на відємний елемент

/*# include <iostream>
# include <ctime>
using namespace std;

void FillArr(int arr[]) {
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 15 -5;
	}
}
void PrintArr(int arr[]) {
	for (int i=0; i<10; i++)
	cout << arr[i] << "    ";
}
void Replace(int arr[]) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] < 0) {
			cout << 0 << "    ";
		}
		else {
			cout << arr[i] << "    ";
		}
	}
}
int main() {
	srand(unsigned(time(NULL)));
	int arr[10];
	
	FillArr(arr);
	PrintArr(arr);
	cout << endl;
	Replace(arr);
	cout << endl;

	system("pause");
	return 0;
}*/

// 3. Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями.Примітка!Функція повинна повертати ссилку на відємний елемент

# include <iostream>
using namespace std;

void FillArr(int arr[]) {
	cout << " Enter the elements of array: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
}
void PrintArr(int arr[]) {
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "    ";
}
void Replace(int arr[], int& minusArr) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] < 0) {
			cout << 0 << "     ";
			minusArr = arr[i] ;
		}
		else {
			cout << arr[i] << "    ";
		}
	}
}
int main() {
	int minusArr = 0;
	int arr[10];

	FillArr(arr);
	PrintArr(arr);
	cout << endl;
	Replace(arr, minusArr);
	cout << endl;

	system("pause");
	return 0;
}