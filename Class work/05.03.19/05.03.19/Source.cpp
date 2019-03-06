/*#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(unsigned(time(NULL)));
	int size = 0;
	cout << "Enter arr size" << endl;
	cin >> size;
	cout << "===========================" << endl;
	int *arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
		cout << "Arr[" << i << "] = " << arr[i]<<"\t" <<arr+i<<endl;//arr+i -adress of array
	}

	delete[]arr;
	system("pause");
	return 0;
}*/

/*# include <iostream>
# include <ctime>

using namespace std;

void Fill(int *const arr, const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

void Print(int *const arr, const int size) {
	cout << "arr address " << arr << endl;
	for (int i = 0; i < size; i++) {
		cout << "Arr [" << i << "] = " << arr[i] << "\t" << arr + i << endl;
	}
}


int main() {
	srand(unsigned(time(NULL)));
	//=====================Demo 1 ========================>
	/*int size = 0;
	cout << "Enter arr size " << endl;
	cin >> size;
	cout << "============================>" << endl;
	int *arr = new int[size];

	for (int i = 0; i < size; i++) {
	arr[i] = rand() % 10;
	cout << "Arr [" << i << "] = " << arr[i] << "\t" << arr + i << endl;
	}
	delete[] arr;*/
	//=====================Demo 1 ========================>
	//=====================Demo 2 ========================>
	/*int size = 0;
	cout << "Enter arr size " << endl;
	cin >> size;
	cout << "============================>" << endl;
	int *arr = new int[size];

	cout << "arr address " << arr << endl;
	Fill(arr, size);
	Print(arr, size);

	delete[] arr;*/
	//=====================Demo 2 ========================>
	//=====================Demo 3 ========================>
	/*int size = 5;
	int *arr1 = new int[size];
	int *arr2 = new int[size];

	Fill(arr1, size);
	Fill(arr2, size);
	cout << "Arr1========================>" << endl;
	Print(arr1, size);
	cout << "Arr2========================>" << endl;
	Print(arr2, size);

	delete[] arr1;
	arr1 = new int[size];

	for (int i = 0; i < size; i++) {
		arr1[i] = arr2[i];
	}

	cout << "Arr1========================>" << endl;
	Print(arr1, size);
	cout << "Arr2========================>" << endl;
	Print(arr2, size);




	delete[] arr1;
	delete[] arr2;
	//=====================Demo 3 ========================>

	system("pause");
	return 0;
}*/

//Написати функції для роботи з динамічним одновимірним масивом: 
//1) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
//2) Доповнення масиву одним елементом.



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
		cout << arr[i] << endl;
	}
}
void Push(int*& arr, int size, int value) { //  ф-я для додавання останнього елементу;
	int* newarr = new int[size + 1];
	for (int i = 0; i < size; i++) {
		newarr[i] = arr[i];
	}
	newarr[size] = value;
	delete[]arr; // видаляємо старий масив в пам'яті
	arr = newarr;  // присвоюємо масиву новий масив
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
//void Push2(int*& arr, int size, int value) { //  ф-я для додавання першого елементу в середині масиву;
//	int* newarr = new int[size + 1];
//	
//	for (int i = 1; i < 4; i++) {
//		newarr[i] = arr[i];
//		
//	}
//	 newarr[4] = value;
//	for (int i = 5; i < size+1; i++) {
//		newarr[5] = arr[i];
//
//	}
//
//	delete[]arr;
//	arr = newarr;
//}
int main() {
	
	int size = 6;
	int* arr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	Push(arr, size, 999);
	cout << "Added array at the end!!!" << endl;
	Print(arr, size + 1);
	Push1(arr, size, 888);
	cout << "Added array at the beginning!!!" << endl;
	Print(arr, size + 1);
	/*Push2(arr, size, 111);
	cout << "Added array in the middle!!!" << endl;
	Print(arr, size + 1);*/
	system("pause");
	return 0;
}
