#include <iostream>
#include <ctime>
#include <stdlib.h>  // для роботи з ф-ю "малок"

using namespace std;
/*Написати функції для роботи з динамічним одновимірним масивом :
		1. Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
		3. Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
		4. Видалення елемента за вказаною позицією.
		5. Вставка нового елемента у довільну допустиму позицію у масиві
		6. Меню*/

void FillArr(int*& arr, int size) {
	
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}
}
void PrintArr(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << endl;
}
void AddLastEl(int*& arr, int size, int value) {  // * &arr  - вказівник на посилання //  ф-я для додавання останнього елементу;
	arr = (int*)realloc(arr, (size + 1) * sizeof(int));   // перевиділити розмір під іншу к-сть (більшу, або меншу)
	arr[size] = value;
}
void MinusIndexEl(int*& arr, int size, int index) {

	int* temp = (int*)calloc((size - 1), sizeof(int));   

	for (int i = 0; i < index; i++) {
		temp[i] = arr[i];
	}
	for (int i = index; i < (size - 1); i++) {

		temp[i] = arr[i + 1]; // [i+1] те саме що [index+1], тому що i = index; 
	}

	free(arr);
	arr = temp;
	cout << endl;
}
void AddIndexEl(int*& arr, int size, int index, int value) {

	int* temp = (int*)calloc((size + 1), sizeof(int));
	for (int i = 0; i < index; i++) {
		temp[i] = arr[i];
	}
	temp[index] = value;
	for (int i = index; i < size; i++) {
		temp[i + 1] = arr[i];
	}

	free(arr);
	arr = temp;
}
void Menu()
{
	int size;
	int choice;

	int value = 0;

	int* arr;
	cout << " Enter size of array: ";
	cin >> size;
	arr = (int*)calloc(size, sizeof(int));
	FillArr(arr, size);
	PrintArr(arr, size);

	for (;;) {
		cout << "  Press:\n 1 - to Add Element\n 2 - to Add Index Element\n 3 - to Delete Index Element \n 0 - to Exit!\n ";
		cin >> choice;

		if (choice == 0)
		{
			cout << "Bye!" << endl;
			break;
		}

		switch (choice) {
		case 1:
			cout << " Enter element you want to add:  ";
			cin >> value;
			AddLastEl(arr, size, value);
			PrintArr(arr, ++size);
			break;
		case 2:
			int index;
			cout << " Enter element you want to add:  ";
			cin >> value;
			cout << "Enter index of element you want to Add:   ";
			cin >> index;
			AddIndexEl(arr, size, index, value);
			PrintArr(arr, ++size);
			break;
		case 3:
			cout << "Enter index of element you want to delete:   ";
			cin >> index;
			MinusIndexEl(arr, size, index);
			PrintArr(arr, --size);
			break;
		default:
			cout << "You did wrong choice!\n Try again! " << endl;
			break;
		}
		system("pause");
		system("cls");
	}
	free(arr);
	system("pause");
}

int main() {
	srand(unsigned(time(NULL)));
	Menu();
	
	system("pause");
	return 0;
}