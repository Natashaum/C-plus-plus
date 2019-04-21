/*#include <iostream>
#include <string>
#include <ctime>

using namespace std;
	   //-------------------------------TASK 1--------------------------------
	   // Задача на динамическое выделение памяти. Изначально есть указатель на массив с одним элементом.
	   // Пользователь вводит число. Если оно больше 0 записываем его в массив.
	   // Далее пользователь вводит второе число, тут уже, если оно больше 0, надо перевыделять память для 2 - х элементов массива и записать в массив второе число.
	   // И так далее…  для 3 - х элементов, для 4 - х…  пока пользователь не введет отрицательное число.
void Fill(int *&arr, int  size) {   // посилання подаємо тоді, коли ми змінюємо дані (заповнюємо масив)
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 30;
	}
}
void Print(int *arr,  int  size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
}
void AddElement(int *&arr, int size, int value)
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

	int  size = 1;
	int* arr = new int[size];   // arr змінна масиву під яку ми виділяємо пам'ять
	int value = 0;
	bool PlusNumer = false;

	Fill(arr, size);

	while (true) {
		Print(arr, size);
		cout << endl;

		cout << "Enter the array you want to add:   ";
		cin >> value;

		if (value > 0) {
			AddElement(arr, size, value);
			size++;
		}
		else {
			cout << "\nThe number is Less than Zero or Equal to Zero! \n" << endl;
			break;
		}
	}
	delete[]arr;
	system("pause");
	return 0;
}*/

//-------------------------------TASK 2--------------------------------

/*#include <iostream>
using namespace std;

  //  Составить программу - тест  на экране по очереди появляются вопросы(вопросы выбираются программистом),
  //  с вариантами ответов. В конце работы программа выдает количество заработанных баллов по результатам ответа.

int main() {

	int result = 0;
	char choice;

	cout << "1. Who sing the song\"Englishman in New York\"" << endl;
	cout << "a) Madonna\nb) Sting\nc) Darren Hayes" << endl;
	cin >> choice;
	if (choice == 'b') {
		cout << "Correct!" << endl;
		result++;
	}
	else {
		cout << "Incorrect answer!" << endl;
	}
	cout << "========================================"<< endl;
	cout << "2. What colour is the ocean?" << endl;
	cout << "a) Blue\nb) Yellow\nc) Red" << endl;
	cin >> choice;
	if (choice == 'a') {
		cout << "Correct!" << endl;
		result++;
	}
	else {
		cout << "Incorrect answer!"<< endl;
	}
	cout << "========================================"<< endl;
	cout << "3. What is the coldest season in a year?" << endl;
	cout << "a) Summer\nb) Spring\nc) Winter" << endl;
	cin >> choice;
	if (choice == 'c') {
		cout << "Correct!" << endl;
		result++;
	}
	else {
		cout << "Incorrect answer!" << endl;
	}
	cout << "========================================"<< endl;
	cout << "4. What is made of water and a lemon ?" << endl;
	cout << "a) Mojito\nb) Lemonade\nc) Juice" << endl;
	cin >> choice;
	if (choice == 'b') {
		cout << "Correct!" << endl;
		result++;
	}
	else {
		cout << "Incorrect answer!" << endl;
	}
	cout << "========================================"<< endl;
	cout << "5. What device do the programmers use to write programmes?" << endl;
	cout << "a) Tablet\nb) Computer\nc) Mobile phone" << endl;
	cin >> choice;
	if (choice == 'b') {
		cout << "Correct!" << endl;
		result++;
	}
	else {
		cout << "Incorrect answer!" << endl;
	}
	cout << "****************************************"<< endl;
	cout << "****************************************"<< endl;
	cout << "Your Total score is:   " << result << endl;
	cout << "****************************************" << endl;
	cout << "****************************************" << endl;
	system("pause");
	return 0;
}*/


//-------------------------------TASK 3--------------------------------
  // Дан массив размера n, заполнить его случайными числами, Найти все нечётные числа массива.

/*#include <iostream>
#include <ctime>
using namespace std;

void FillArr (int *&arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 30;
		cout << arr[i] << "    ";
	}
}
void PrintArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {        // arr[i] - це значення елементу масиву (якщо написати просто i - то виведе порядковий номер масиву)
			cout << arr[i] << "\t";
		}
	}
}
int main() {
	srand(unsigned(time(NULL)));
	int size;
	cout << " Enter the size of array:    ";
	cin >> size;
	cout << "------------------------------------\n";
	int* arr = new int[size];
	FillArr(arr, size);
	cout << endl << endl;
	cout << " All odd elements:\n";
	cout << "------------------------------------\n";
	PrintArr(arr, size);
	cout << endl << endl;
	delete[]arr;
	system("pause");
	return 0;
}*/


//-------------------------------TASK 4--------------------------------
//  Дана строка символов, которая обязательно заканчивается символом точки. Удалить из строки первые буквы каждого слова.

/*#include <iostream>
#include <string>
using namespace std;

int main() {
	char text[255];
	cout << "Enter text! " << endl;
	cin.getline(text, 255, '.');   // зчитуємо текст за допомогою cin.getline щоб зчитувало з пробілами
								   // якщо задаэмо у ф-ю параметр '.' ,то зчитуэ тыльки до цього знаку
	bool isWordStart = true;
	for (int i = 0; i < strlen(text); i++) {
		if (!isWordStart)
		{
			cout << text[i];
		}
		if (text[i] == ' ')
		{
			isWordStart = true;
		}
		else
		{
			isWordStart = false;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}*/


//-------------------------------TASK 5--------------------------------
// Составить программу, которая будет генерировать случайные числа в интервале[a; b] и заполнять ими двумерный массив размером 10 на 10. 
// В массиве необходимо найти номер строки с минимальным элементом.
// Поменять строки массива местами, строку с минимальным элементом и первую строку массива.
// Организовать удобный вывод на экран.
/*#include <iostream>
#include <ctime>
using namespace std;
void FillArr(int**& arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 40 + 1; // від 1 до 40
		}
	}
}
void PrintArr(int**& arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int Find_Min_Element_Row(int**& arr, int rows, int cols) {
	int min = 41; // Треба написати 41, щоб будь який елемент, був менше за початкий мінімальний
	int minI = 0;
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {      // проходимось по колонках масиву щоб визначити мінімальний елемент масиву

			if (min > arr[i][j]) {
				min = arr[i][j];
				minI = i; // присвоюєм minI значення i, що є рядком, в якому знаходиться мінмальний елемент
			}
		}
	}
	cout << "Minimun element is in row [" << minI << "] " << min << endl;
	return minI;
}
void ChangeRows(int**& arr, int rows, int cols, int minI) {
	int temp = 0;
	// строку for (int i = 0; i < rows; i++)  не виводимо, тому що ми передаємо   -  int minI (що і явліється порядковим номером рядка з мінімальним елементом)
	for (int j = 0; j < cols; j++) {      // проходимось по колонках масиву щоб визначити мінімальний елемент масиву
		temp = arr[minI][j];
		arr[minI][j] = arr[0][j];
		arr[0][j] = temp;
	}
}


int main() {
	srand(unsigned(time(NULL)));
	int rows = 10;
	int cols = 10;

	int** arr = new int* [rows];      //Три слідуючих рядки записуємо, щоб виділити динамічну пам'ять для двовимірного масиву
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	FillArr(arr, rows, cols);
	PrintArr(arr, rows, cols);
	cout << endl;
	int minI = Find_Min_Element_Row(arr, rows, cols);
	cout << endl;
	ChangeRows(arr, rows, cols, minI);
	PrintArr(arr, rows, cols);
	delete[]arr;
	system("pause");
	return 0;
}*/

//-------------------------------TASK 6--------------------------------

//  Дана строка символов. Признак конца строки — символ 'n' (переход на новую строку).
//  Строка состоит из слов, которые отделены друг от друга пробелами.
//  Вывести самое длинное слово и его порядковый номер.

/*#include <iostream>

using namespace std;

int main() {
	char charText[255];
	cin.getline(charText, 255, '\n');  // '\n' - Признак конца строки — символ 'n' (переход на новую строку)

	string text(charText); // Переводимо charText яка являється масивом (char[]) в зміну text типу string

	string tempWord = "";  // ""  -  Ініціалізація змінної в стрінгу (аналог int A = 0;) 
	string maxWord = "";
	int index = -1; // Якщо не буде слів зовсім, то щоб виводило не 0 
					// (який вказував би на перший символ), а -1
	int counter = 0;

	for (int i = 0; i < text.length(); i++) // text.length() - Функція, яка повертає кількість символів в строці string (аналог strlen тільки для string)
	{
		if (text[i] == ' ')
		{
			if (tempWord.length() > maxWord.length())
			{
				maxWord = tempWord;
				index = counter;
			}
			if (tempWord != "")
			{
				counter++;
			}
			tempWord = "";
		}
		else
		{
			tempWord += text[i];
		}
	}
	cout << "The longest word is: " << maxWord << endl;
	cout << "Index of the longest word is: " << index << endl;
	system("pause");
}*/