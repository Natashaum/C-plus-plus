
//   1. Написати функції для роботи з динамічним одновимірним масивом :
//      Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
//      Виводу масиву
//      Доповнення масиву одним елементом в кінець масиву.
//      Доповнення масиву одним елементом в початок масиву.
//      Видалення елемента за вказаною позицією.
//      Вставка нового елемента у довільну допустиму позицію у масиві
//      Вставка  в кінець, в початок, за вказаною позицією блоку елементів
//      Видалення  з кінеця, з початоку, за вказаною позицією блоку елементів
//      Меню

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
void AddLastEl(int*& arr, int size, int value) {  // * &arr  - вказівник на посилання //  ф-я для додавання останнього елементу;
	int* newarr = new int[size + 1];  // new  -  виділення пам'яті типу  int,  розміру  [size +1] // Створення нового масиву на розмір більшого;
	for (int i = 0; i < size; i++) {
		newarr[i] = arr[i];
	}
	newarr[size] = value;
	delete[]arr;
	arr = newarr;
}
void AddFirstEl(int*& arr, int size, int value) { //  ф-я для додавання першого елементу;
	int* newarr = new int[size + 1];

	newarr[0] = value;
	for (int i = 1; i < size + 1; i++) { // починаємо цикл з 1, тому що якщо почати з 0, то в слідуючому рядку при [i - 1] ми виходимо за межі пам'яті і тоді першим елементом буде -1.
		newarr[i] = arr[i - 1]; // arr [i - 1] - являється 0 елементом масиву 
	}

	//for (int i = 0; i < size; i++)
	//{
	//newarr[i + 1] = arr[i];
	//}

	//for (int i = 7; i < size + 7; i++)
	//{
	//	newarr[i - 6] = arr[i-7];
	//}

	// 0 1 2 3 4 5 6 7 8
	// 9 0 _ _ _ _ _ _ _ _

	delete[]arr;
	arr = newarr;
}
void AddIndexEl(int*& arr, int size, int value, int index) { //  ф-я для додавання елементу за вказаним індексом;
	int* newarr = new int[size + 1];

	for (int i = 0; i < index; i++) {
		newarr[i] = arr[i];
	}
	newarr[index] = value;
	for (int i = size; i > index; i--) {
		newarr[i] = arr[i - 1];
	}
	delete[]arr;
	arr = newarr;
}
void MinusLast(int*& arr, int size) {  // * &arr  - вказівник на посилання //  ф-я для віднімання останнього елементу;
	int* newarr = new int[size - 1];
	for (int i = 0; i < size - 1; i++) {
		newarr[i] = arr[i];
	}

	delete[]arr;
	arr = newarr;
}
void MinusFirst(int*& arr, int size) { //  ф-я для віднімання першого елементу;
	int* newarr = new int[size - 1];


	for (int i = 1; i < size; i++) { // починаємо цикл з 1, тому що якщо почати з 0, то в слідуючому рядку при [i - 1] ми виходимо за межі пам'яті і тоді першим елементом буде -1.
		newarr[i - 1] = arr[i]; // [i - 1] 
	}

	delete[]arr;
	arr = newarr;
}
void MinusIndex(int*& arr, int size, int index) {
	int* newarr = new int[size - 1];
	for (int i = 0; i < index; i++) {
		newarr[i] = arr[i];
	}
	for (int i = index; i < size - 1; i++) {
		newarr[i] = arr[i + 1];
	}
	delete[]arr;
	arr = newarr;
}
void AddBlockEl(int*& arr, int size, int elemNumber, int index, int* valuesArr) {
	int* newarr = new int[size + elemNumber];

	for (int i = 0; i < index; i++) {
		newarr[i] = arr[i];
	}
	for (int i = index; i < index + elemNumber; i++)
	{
		newarr[i] = valuesArr[i - index];    // i-му  (index) елементу присвоюється 1 ше значення елементу, яке потрібно додати; 
	}
	for (int i = index + elemNumber; i < size + elemNumber; i++)
	{
		newarr[i] = arr[i - elemNumber];
	}
	delete[]arr;
	arr = newarr;
}

void MinusBlockEl(int*& arr, int size, int index, int elemNumber) {
	int* newarr = new int[size - elemNumber];

	for (int i = 0; i < index; i++) {
		newarr[i] = arr[i];
	}
	for (int i = index + elemNumber; i < size; i++) {
		newarr[i - elemNumber] = arr[i];
	}

	delete[]arr;
	arr = newarr;
}

void AddFirstBlock(int*& arr, int size, int elemNumber, int* newValuesArr) {
	int* newarr = new int[size + elemNumber];

	for (int i = 0; i < elemNumber; i++) {
		newarr[i] = newValuesArr[i];
	}
	for (int i = elemNumber; i < size + elemNumber; i++) {
		newarr[i] = arr[i - elemNumber]; // newarr[i]  присвоюємо нульовий елемент старого масиву. А щоб це зробити треба [i - elemNumber] (де і = elemNumber;   elemNumber - elemNumber = 0)
	}
	delete[]arr;
	arr = newarr;
}
void AddLastBlock(int*& arr, int size, int elemNumber, int* newValuesArr) {
	int* newarr = new int[size + elemNumber];
	for (int i = 0; i < size; i++) {
		newarr[i] = arr[i];
	}
	for (int i = size; i < size + elemNumber; i++) {
		newarr[i] = newValuesArr[i - size];
	}

	delete[]arr;
	arr = newarr;
}

void MinusFirstBlock(int*& arr, int size, int minusSize) {
	int* newarr = new int[size - minusSize];

	for (int i = minusSize; i < size; i++) {
		newarr[i - minusSize] = arr[i];
	}

	delete[]arr;
	arr = newarr;
}
void MinusLastBlock(int*& arr, int size, int minusSize) {
	int* newarr = new int[size + minusSize];

	for (int i = 0; i < size - minusSize; i++) {
		newarr[i] = arr[i];
	}

	delete[]arr;
	arr = newarr;
}

void Menu(int*& arr, int size) {

	cout << " Make your choice:\n Press:\n 1 - (necessarily!!!) - to Fiil and Print Array\n 2 - to Add Last element\n 3 - to Add First element\n 4 - to Add element in the middle\n"; 
	cout << " 5 - to Delete last element \n 6 - to Delete first element\n 7 - to Delete element in the middle\n 8 - to Add block of elements\n 9 - to Delete block of elements\n";
	cout << " 10 - to Add first block of elements\n 11 - to Add last block of elements\n 12 - to Delete first block of elements\n 13 - to Delete last block of elements\n 14 - to Exit!\n";
	for (;;) {
		cout << "Your choice is:    ";
		int choice = 0;
		cin >> choice;
		if (choice == 1) {
			Fill(arr, size);
			Print(arr, size);
			cout << endl;
			cout << "============================================================" << endl;
		}
		else if (choice == 2) {
			cout << "Enter last element " << endl;
			int element;
			cin >> element;
			AddLastEl(arr, size, element);
			size++;   // щоб збільшити змінну на розмір масиву;
			Print(arr, size);
			cout << endl;
			cout << "============================================================" << endl;
		}
		else if (choice == 3) {
			cout << "Enter first element:    " << endl;
			int element;
			cin >> element;
			AddFirstEl(arr, size, element);
			size++;   // щоб збільшити змінну  size  на розмір масиву;
			Print(arr, size);
			cout << endl;
			cout << "============================================================" << endl;
		}
		else if (choice == 4) {
			cout << "Enter the value you want to add:   ";
			int element;
			int index;
			cin >> element;
			cout << "What index of array do you want to add your value?   ";
			cin >> index;
			AddIndexEl(arr, size, element, index);
			size++;
			Print(arr, size);
			cout << endl;
			cout << "============================================================" << endl;
		}
		else if (choice == 5) {
			MinusLast(arr, size);
			size--;   // щоб зменшити змінну на розмір масиву;
			Print(arr, size);
			cout << endl;
			cout << "============================================================" << endl;
		}
		else if (choice == 6) {
			MinusFirst(arr, size);
			size--;
			Print(arr, size);
			cout << endl;
			cout << "============================================================" << endl;
		}
		else if (choice == 7) {
			int index;
			cout << "Enter index of element you want to delete:   ";
			cin >> index;
			MinusIndex(arr, size, index);
			size--;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 8) {
			int elemNumber;
			int index;
			cout << " How many element do you want to Add?   ";
			cin >> elemNumber;
			cout << endl;
			cout << " Enter the index you want to put your elements:   ";
			cin >> index;

			int* newValuesArr = new int[elemNumber];
			cout << " Enter the new values:   " << endl;
			for (int i = 0; i < elemNumber; i++)
			{
				cin >> newValuesArr[i];
				cout << endl;
			}

			AddBlockEl(arr, size, elemNumber, index, newValuesArr);

			size += elemNumber; // щоб збільшити змінну, яка вказує на розмір масиву;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 9)
		{
			int index;
			int elemNumber;
			cout << " Enter number of elements you want to Delete?   ";
			cin >> elemNumber;
			cout << endl;
			cout << " Enter the index of elements you want to Delete  :   ";
			cin >> index;

			MinusBlockEl(arr, size, index, elemNumber);

			size -= elemNumber;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 10) {
			int elemNumber;
			cout << " Enter number of elements you want to Add:  ";
			cin >> elemNumber;
			cout << endl;

			int* newValuesArr = new int[elemNumber];
			cout << " Enter the new values:   " << endl;
			for (int i = 0; i < elemNumber; i++)
			{
				cin >> newValuesArr[i];
				cout << endl;
			}

			AddFirstBlock(arr, size, elemNumber, newValuesArr);

			size += elemNumber;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 11) {
			int elemNumber;
			cout << " Enter number of elements you want to Add:  ";
			cin >> elemNumber;
			cout << endl;

			int* newValuesArr = new int[elemNumber];
			cout << " Enter the new values:   " << endl;
			for (int i = 0; i < elemNumber; i++)
			{
				cin >> newValuesArr[i];
				cout << endl;
			}

			AddLastBlock(arr, size, elemNumber, newValuesArr);

			size += elemNumber;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 12) {
			int elemNumber;
			cout << " Enter number of elements you want to delete:  ";
			cin >> elemNumber;
			cout << endl;

			MinusFirstBlock(arr, size, elemNumber);

			size -= elemNumber;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 13) {
			int elemNumber;
			cout << " Enter number of elements you want to delete:  ";
			cin >> elemNumber;
			cout << endl;

			MinusLastBlock(arr, size, elemNumber);

			size -= elemNumber;
			Print(arr, size);
			cout << endl;
			cout << "=====================================================" << endl;
		}
		else if (choice == 14) {
			cout << " Exit!" << endl;
			break;
		}
		else {
			cout << " You have done incorrect choice!!! \n      Try again! " << endl;
			cout << "=====================================================" << endl;
		}
	}
	
}
int main() {
	srand(unsigned(time(NULL)));
	int size = 5;
	int* arr = new int[size];

	Menu(arr, size);


	delete[]arr;
	system("pause");
	return 0;
}