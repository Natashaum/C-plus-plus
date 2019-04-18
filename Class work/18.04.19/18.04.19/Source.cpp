#include <iostream>
#include <string>
#include <ctime>

using namespace std;
//Задача на динамическое выделение памяти. Изначально есть указатель на массив с одним элементом.
//Пользователь вводит число. Если оно больше 0 записываем его в массив.
//Далее пользователь вводит второе число, тут уже, если оно больше 0, надо перевыделять память для 2 - х элементов массива и записать в массив второе число.
//И так далее…  для 3 - х элементов, для 4 - х…  пока пользователь не введет отрицательное число.
void Fill(int *arr, int const size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 30;
	}
}
void Print(int *arr,  int const size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
}
void AddElement(int *arr, int size, int value)
{
	int* newarr = new int[size + 1];  
	for (int i = 0; i < size; i++) {
		newarr[i] = arr[i];
	}
	newarr[size] = value;
	delete[]arr;
	arr = newarr;
}
	
int main() 
{
	srand(unsigned(time(NULL)));

	int const size = 1;
	int arr[size];
	int value = 0;

	int* newarr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	cout << endl;

	cout << "Enter the array you want to add:   ";
	cin >> value;
	
		if (value > 0) {
			AddElement(arr, size + 1, value);
			Print(arr, size);
		}
		else {
			cout << "The number is < 0! ";
		}
		
	delete[]arr;
	system("pause");
	return 0;
}

