#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*string GetDataFromPB() {
	return "Data from PB";  // н-д одержати дані з Приват Банку  (весь написаний текст повертається в лапках)
}
string GetDataFromNBU() {
	return "Data from NBU";
}
string GetDataFromSW() {   
	return "Data from SW";
}
void ShowInfo(string(*FunkPtr)()) {   //  *FunkPtr -  вказівник на ф-ю (Ptr - pointer)
	cout << FunkPtr() << endl;
}
int main() {
	ShowInfo(GetDataFromPB);

	system("pause");
	return 0;
}*/

// Написати 2 логічні функції : bigger(int, int) – повертає true, якщо перше число більше другого, інакше повертає false; 
//                              функція smaller(int, int) – навпаки, повертає true, якщо перше менше другого.
// Написати функцію sort_arr(int *array, int size, bool(*f)(int, int)) для впорядкування масиву.Функція отримує масив та вказівник на логічну функцію, яка буде задавати порядок сортування.
// Так, наприклад, при передачі у функцію sort_arr() третім аргументом адреси функції bigger, масив впорядкується по зростанню, а при передачі адреси функції smaller, масив впорядкується по спаданню.
 
/*void FillArr(int *arr, const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10 + 1;
	}
}
void PrintArr(int *arr, const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
bool Bigger(int a, int b) {
	if (a > b) {
		return true;
	}
	else {
		return false;
	}
}
bool Smaller(int a, int b) {
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}
void SortUp(int *const arr, int const size) {

	int tmp = 0;

	for (int i = 0; i < size; i++) {

		for (int j = -1; j < size; j++) {

			if (arr[i] < arr[j + 1]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}

void SortDown(int *const arr, int const size) {

	int tmp = 0;

	for (int i = 0; i < size; i++) {

		for (int j = -1; j < size - 1; j++) {

			if (arr[i] > arr[j + 1]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}
void SortArr(int *arr, int const size, bool(*f)(int a, int b)) {

	int a = 10;
	int b = 5;
	if (f(a, b)) {
		SortUp(arr, size);
	}
	else {
		SortDown(arr, size);
	}

}
int main() {
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int arr[SIZE];
	FillArr(arr, SIZE);
	PrintArr(arr, SIZE);
	cout << Bigger(5, 3) << endl;
	cout << endl;
	cout << Smaller(5, 3) << endl;
	cout << endl;
	SortArr(arr, SIZE , Bigger); // в залежності від ф-ї яку ми сюди передамо (Bigger чи Smaller) така ф-я і буде викликатися
	PrintArr(arr, SIZE);
	system("pause");
	return 0;
}*/

//   1. Задано рядок, що складається із символів.  Символи поєднуються в слова. Слова відокремлюються одним або декількома пробілами.
//      Наприкінці тексту ставиться крапка. Текст містить не більш 255 символів
int main() {
	char text[255];
	
	cout << "Enter text! " << endl;
	/*cin >> text;*/
	cin.getline(text, 255);
	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == 32) {
			cout << i <<endl;
		}
		else if (text[i] == 46) {
			break;
		}
	}
	

	system("pause");
	return 0;
 }