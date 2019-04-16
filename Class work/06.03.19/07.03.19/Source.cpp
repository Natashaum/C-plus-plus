//  1. Написати функції для роботи з динамічним одновимірним масивом :
//     Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
//     Виводу масиву
//     Доповнення масиву одним елементом в кінець масиву.
//     Доповнення масиву одним елементом в початокмасиву.
//     Меню


#include <iostream>
#include <ctime>


using namespace std;

void Fill(int* const arr, const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}
void Print(int* const arr, const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
}
void Push(int*& arr, int size, int value) {  // * &arr  - вказівник на посилання //  ф-я для додавання останнього елементу;
	int* newarr = new int[size + 1];
	for (int i = 0; i < size; i++) {
		newarr[i] = arr[i];
	}
	newarr[size] = value;
	delete[]arr;
	arr = newarr;
}
void Push1(int*& arr, int size, int value) { //  ф-я для додавання першого елементу;
	int* newarr = new int[size + 1];

	newarr[0] = value;
	for (int i = 1; i < size + 1; i++) {
		newarr[i] = arr[i - 1];
	}

	delete[]arr;
	arr = newarr;
}

void Menu(int*& arr, int& size) {

	cout << " Make your choice:\n Press:\n 1 - to Fiil and Print Array\n 2 - to Add Last element\n 3 - to Add First element\n 4 - to Exit!\n";
	cout << "-----------------------------------------------------" << endl;
	for (;;) {
		cout << "Your choice is  ";
		int choice = 0;
		cin >> choice;
		if (choice == 1) {
			Fill(arr, size);
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 2) {
			cout << "Enter last element " << endl;
			int element;
			cin >> element;
			Fill(arr, size);
			Push(arr, size, element);
			size++;   // щоб збільшити змінну на розмір масиву;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 3) {
			cout << "Enter first element " << endl;
			int element;
			cin >> element;
			Fill(arr, size);
			Push1(arr, size, element);
			size++;   // щоб збільшити змінну  size  на розмір масиву;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 4) {
			cout << " Exit!" << endl;
			break;
		}
		else {
			cout << " You have done incorrect choice!!! \n      Try again! " << endl;
			cout << "==============================================" << endl;
		}
	}
}
int main() {
	int size = 5;
	int* arr = new int[size];

	Menu(arr, size);


	delete[]arr;
	system("pause");
	return 0;
}