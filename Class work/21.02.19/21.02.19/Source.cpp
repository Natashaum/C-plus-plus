#include <iostream>
#include <ctime>
using namespace std;

/*int main() {
	const int size = 5;
	int arr[size] = { 2,8,16,27,92 };
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "]  " << arr[i] << endl;
	}
	cout << "arr address   " << arr << endl; // адреса першого елементу масиву (наступний елемент буде мати + 4 байта до елементу)

	int *pArr = arr; //  присвоюєм вказівнику адресу перед виведенням масиву  //з масивом амперанта не треба
	
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "]  " << pArr[i] << endl;
	}

	cout << "pArr address   " << pArr << endl; // адреса першого елементу масиву (нульового) по вказівнику (наступний елемент буде мати + 4 байта до елементу)

	cout << "Arr [1] address = " << *(pArr + 1) << endl; // * значення 1го елементу
	cout << "Arr [2] address = " << *(pArr + 2) << endl; // * значення 2го елементу
	cout << "Arr [2] address = " << pArr + 2 << endl;   // якщо розіменований вказівник, то виводить адресу
	cout << "=========================" << endl;
	for (int i = 0; i < size; i++) {
		cout << "pArr [" << i << "] address = " << (pArr +i ) << endl; // pArr+i - пошемо щоб кожного разу виводило наступний елемент
	}
	system("pause");
	return 0;
}*/

/*int main() {
	/*1. Дано цілочисельний одновимірний масив.
	   Заповнити його, вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників.*/

	/*int arr[5]{ 1,2,3,4,5 };
	int *pArr = arr;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Arr [" << i << "]  = " << pArr[i] << endl;
		sum += pArr[i];
	}
	cout << "Sum = " << sum << endl;
	
	for (int i = 5 - 1; i >= 0; --i) {
		cout << "Arr [" << i << "]  = " << pArr[i] << endl;
	}
		
	
	system("pause");
	return 0;
}*/
	/*  2. Дано одновимірний масив. Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями.
		   Вивести перетворений масив на екран*/
/*int main() {
	int arr[5]{ 1,2,3,4,5 };
	int *pArr = arr;
	int temp = 0;
	int max = 0;
	int maxI = 0;
	int min = 100; // пишемо для того щоб виконувалась умова коли мінімальне значення більше нуля
	int minI = 0;
	for (int i = 0; i < 5; i++) {
		cout << " Arr [" << i << "]  = " << pArr[i] << endl;
	}
	for (int i = 0; i < 5; i++) {
		if (max < pArr[i]) {
			max = pArr[i];
		    maxI = i;
		}
	}
	for (int i=0; i < 5; i++){
		if (min > pArr[i]) {
			min = pArr[i];
			minI = i;
		}
		}
	cout << "------------------------" << endl;
		cout << " Max [" << maxI << "] = "<< max << endl;
		cout << " Min [" << minI << "] = "<< min << endl;
		cout << endl;
		cout << "-----After Changes-----" << endl;
		cout << " Max [" << maxI << "] = " << min << endl;
		cout << " Min [" << minI << "] = " << max << endl;
		cout << endl;
	system("pause");
	return 0;
}*/

 /* 3. Дано два масиви, впорядкованих по зростанню : 
    Сформуйте третій масив, який складається з елементів масивів А і В, впорядкованих по зростанню.*/

void FillArr (int *pArr) {
	for (int i = 0; i < 10; i++) {
		*(pArr + i ) = rand() % 10 + 1; // *(pArr+i) -  розіменований вказівник(по іншому записати вказівниками не можемо),
		                                //               це те ж саме якщо б ми писали   arr[i]   в звичайному масиві. 
	}
}

// тут написати ф-ю сортування бульбашкою масиву  
void BubbleSort(int *pArr) {
	int temp;
		for (int i = 0; i < 10 - 1; i++)
		{
			for (int j = 0; j < 10 - i - 1; j++)
			{
				if (*(pArr +j) > pArr[j + 1])
				{
					temp = *(pArr + j);
					*(pArr + j) = pArr[j + 1];
					pArr[j + 1] = temp;
				}
			}
		}
	}

void PrintArr(int *pArr) {
	for (int i = 0; i < 10; i++) {
		cout << *(pArr + i) << "   " << endl;
	}
}
int main() {
	srand(unsigned(time(NULL)));
	int arr[10];
	int *pArr = arr;
	FillArr(pArr);
	PrintArr(pArr);
	BubbleSort(pArr);
	cout << "-------------------" << endl;
	PrintArr(pArr);
	system("pause");
	return 0;
}

