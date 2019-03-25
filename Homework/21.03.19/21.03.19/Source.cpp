#include <iostream>
#include <ctime>
using namespace std;

//   1) Написати функції для роботи з динамічним одновимірним масивом: 
//   a) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні[-12..56].Функція повертає адресу створеного масиву.
//   b) Виводу масиву
//   c) Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.

void FillArr(int *&arr, int const SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 68-12;
	}
}
void PrintArr(int *&arr, int const SIZE) {
	for (int i=0; i < SIZE; i++)
	cout << arr[i]<<"\t";
}

void AddElemFirst(int*& arr, int SIZE, int value) {
	int* newarr = new int[SIZE + 1];

	newarr[0] = value;
	for (int i = 0; i < SIZE; i++)
	{
		newarr[i + 1] = arr[i];
	}
	delete[]arr;
	arr = newarr;
}

void AddElemLast(int*& arr, int SIZE, int value) {
	int* newarr = new int[SIZE + 1];

	for (int i = 0; i < SIZE; i++)
	{
		newarr[i] = arr[i];
	}
	newarr[SIZE] = value;
	delete[]arr;
	arr = newarr;
}

void AddElem(int*& arr, int size, int value, void(*f)(int*& arr, int size, int value))
{
	f(arr, size, value);
}

int main() {
	srand(unsigned(time(NULL)));
    int SIZE = 10;
	int *arr = new int[SIZE];
	int value = 0;
	FillArr(arr, SIZE);
	PrintArr(arr, SIZE);
	cout << endl;
	cout << " Enter first Value you want to add:  " << endl;
	cin >> value;
	AddElem(arr, SIZE, value, AddElemFirst);
	SIZE++;
	PrintArr(arr, SIZE);
	cout << endl;
	cout << " Enter last Value you want to add:  " << endl;
	cin >> value;
	AddElem(arr, SIZE, value, AddElemLast);
	SIZE++;

	PrintArr(arr, SIZE);
	cout << endl;
	delete [] arr;
	system("pause");
	return 0;
}