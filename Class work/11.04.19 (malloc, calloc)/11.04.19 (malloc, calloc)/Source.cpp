#include <iostream>
#include <ctime>
#include <stdlib.h>  // для роботи з ф-ю "малок"

using namespace std;
/*Написати функції для роботи з динамічним одновимірним масивом :
	    1. Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.Функція повертає адресу створеного масиву.
		2. Виводу масиву
		3. Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
		4. Видалення елемента за вказаною позицією.
		5. Вставка нового елемента у довільну допустиму позицію у масиві
		6. Меню*/

void FillArr(int *&arr, int size) {

	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}
}
void PrintArr(int *arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << endl;
}
void AddLastEl(int*& arr, int size, int value) {  // * &arr  - вказівник на посилання //  ф-я для додавання останнього елементу;
	arr = (int*)realloc(arr, (size+1) * sizeof(int));   // перевиділити розмір під іншу к-сть (більшу, або меншу)
	arr[size] = value;
}
void MinusIndexEl(int*&arr, int size, int index) {
	//int index = 0;
	
   int *temp = (int*)calloc((size - 1), sizeof(int));   // виділити розмір під іншу к-сть (більшу, або меншу) ??????????
     //arr = (int*)calloc(*arr, (size - 1) * sizeof(int));  
	 
	for (int i = 0; i < index; i++) {
		temp[i] = arr[i];
	}
	for (int i = index; i < (size - 1); i++){
		temp[i] = arr[i + 1]; // [i+1] те саме що [index+1], тому що i = index; 
	}
	cout << endl;
}

int main() {
	srand(unsigned(time(NULL)));
	int value = 0;
	int size = 0;
	int index;
	
	cout << " Enter size of array: ";
	cin >> size;
	int *arr = (int *)calloc(size, sizeof(int));
	
	FillArr(arr, size);
	PrintArr(arr, size);

	cout << " Enter element you want to add:  ";
	cin >> value;
	AddLastEl(arr, size, value);
	PrintArr(arr, size+1);

	cout << "Enter index of element you want to delete.   ";
	cin >> index;
	MinusIndexEl(arr, size, index);
	PrintArr(arr, size-1);
	//size--;
    
	system("pause");
	return 0;
}