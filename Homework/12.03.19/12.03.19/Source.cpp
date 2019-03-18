#include <iostream>
#include <ctime>

/*1.  Написати функції для роботи з динамічною матрицею :
		1. Функція створення динамічної матриці розміром row x col
		2. Функція заповнення матриці
		3. Функція виводу матриці
		4. Функція доповнення матриці новим рядком
		5. Функція видалення з матриці рядка за вказаним номером
		6. Функція вставки нового рядка за вказаним номером
		7. Функція доповнення матриці новим стовпчиком
		8. Функція видалення з матриці стовпця за вказаним номером
		9. Функція вставки нового стовпця за вказаним номером*/

using namespace std;
//  1. Функція створення динамічної матриці розміром row x col
void Create(int**& arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {   // таким записом ми створюємо масив вказівників
		arr[i] = new int[cols];
	}
}
//  Ф-я видалення масивів на які вказує масив вказівників
void Delete(int**& arr, int rows) {   

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
}
//  2. Функція заповнення матриці
void Fill(int**& arr, int rows, int cols) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

//  3.  Функція виводу матриці
void Print(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void FillNewArr(int*& arr, int cols) { //  ф-я створення нового одновимірного масиву, який ми потім будемо додавати у двовимірний масив
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}

//  4.  Функція доповнення матриці новим рядком
void AddFirstRow(int**& arr, int* newRow, int rows, int cols) {
	int** newarr = new int* [rows + 1];  // створюємо посилання на  новий масив вказівників, який буде зберігати саме вказівники (на один ряд більший)
	Create(newarr, rows + 1, cols);   //   створення нового масиву на один рядок більшого
	//newarr[0] = newRow;  // це один з варіантів присвоєння, але краще робити так як записано нижче, через цикл 
	for (int j = 0; j < cols; j++)
	{
		newarr[0][j] = newRow[j];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			newarr[i + 1][j] = arr[i][j];
		}
	}
	Delete(arr, rows);
	delete[] arr;
	arr = newarr;
}

//  5.  Функція видалення з матриці рядка за вказаним номером
void IndexDelete(int**& arr, int rows, int cols) {
	int** newarr = new int* [rows - 1];
	Create(newarr, rows - 1, cols);
	int index;
	cout << " Enter index of a row you want to delete:   ";
	cin >> index;
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < cols; j++) {
			newarr[i][j] = arr[i][j];
		}
	}
	for (int i = index; i < rows - 1; i++) {
		for (int j = 0; j < cols; j++) {
			newarr[i][j] = arr[i + 1][j];
		}
	}
	Delete(arr, rows);
	delete[] arr;
	arr = newarr;
}
//  6.  Функція вставки нового рядка за вказаним номером
void AddNewRow(int**& arr, int rows, int cols, int index, int* newRow) {
	int** newarr = new int* [rows + 1];
	Create(newarr, rows + 1, cols);
	cout << " Enter index of row you want to add:   ";
	cin >> index;
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < cols; j++) {
			newarr[i][j] = arr[i][j];
		}
	}

	for (int j = 0; j < cols; j++)
	{
		newarr[index][j] = newRow[j];   // index - новий рядок  який ми хочемо добавити 
	}

	for (int i = index + 1; i < rows + 1; i++) {
		for (int j = 0; j < cols; j++) {
			newarr[i][j] = arr[i - 1][j];
		}
	}
	Delete(arr, rows);
	delete[] arr;
	arr = newarr;
}
void FillNewColArr(int*& arr, int cols) { //  ф-я створення нового одновимірного масиву на одну колонку більшого, який ми потім будемо додавати у двовимірний масив
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}
//  7.    Функція доповнення матриці новим стовпчиком
void AddColumn(int**& arr, int* newCol, int rows, int cols) {
	int** newarr = new int* [rows];
	Create(newarr, rows, cols+1);   //   створення нового масиву на один колонку більшого
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			newarr[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++) {
		newarr[i][cols] = newCol[i];
	}
	
	Delete(arr, rows);
	delete[] arr;
	arr = newarr;
}
//   8. Функція видалення з матриці стовпця за вказаним номером

void IndexColDel(int**& arr, int rows, int cols) {
	int** newarr = new int* [rows];
	Create(newarr, rows, cols-1);
	int index;
	cout << " Enter index of a col you want to delete:   ";
	cin >> index;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < index; j++) {
			newarr[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = index; j < cols-1; j++) {
			newarr[i][j] = arr[i][j+1];
		}
	}
	Delete(arr, rows);
	delete[] arr;
	arr = newarr;
}
//  9. Функція вставки нового стовпця за вказаним номером
void AddIndexCol(int**& arr, int* newCol, int rows, int cols) {
	int** newarr = new int* [rows];
	Create(newarr, rows, cols + 1);
	int index;
	cout << " Enter index of a column you want to add:   ";
	cin >> index;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < index; j++) {
			newarr[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		newarr[i][index] = newCol[i];   // index - нови колонка  яку ми хочемо добавити 
	}
	for (int i = 0; i < rows; i++) {
		for (int j = index + 1; j < cols + 1; j++) {
			newarr[i][j] = arr[i][j - 1];
		}
	}

	Delete(arr, rows);
	delete[] arr;
	arr = newarr;
}
int main() {

	srand(unsigned(time(NULL)));
	int rows = 0;
	int cols = 0;
	int index = 0;
	cout << "Enter number of rows:  ";
	cin >> rows;
	cout << "Enter number of cols:  ";
	cin >> cols;

	int** arr = new int* [rows];  // створюємо посилання на масив вказівників, який буде зберігати саме вказівники

	Create(arr, rows, cols);
	Fill(arr, rows, cols);
	Print(arr, rows, cols);
	cout << endl;

	int* newRow = new int[cols];  // створюємо посилання на новий одновимірний масив, який потім будемо добавляти в динамічний 2х вимірний масив і виділення на нього пам'яті

	FillNewArr(newRow, cols);
	cout << "================ Add new row ============" << endl;
	AddFirstRow(arr, newRow, rows, cols);
	rows++;
	Print(arr, rows, cols);
	cout << endl;
	cout << "================ Delete index row =============" << endl;
	IndexDelete(arr, rows, cols);
	rows--;
	Print(arr, rows, cols);
	cout << endl;
	cout << "================ Add index row =============" << endl;
	int* newRow2 = new int[cols];  // створюємо посилання на новий одновимірний масив, який потім будемо добавляти в динамічний 2х вимірний масив і виділення на нього пам'яті

	FillNewArr(newRow2, cols);
	AddNewRow(arr, rows, cols, index, newRow2);
	rows++;
	Print(arr, rows, cols);
	cout << endl;
	cout << "================ Add new column =============" << endl;
	
	int* newCol = new int[rows];   // створюємо посилання на новий одновимірний  масив колонки
	FillNewArr(newCol, rows);
	AddColumn(arr, newCol, rows, cols);
	cols++;
	Print(arr, rows, cols);
	cout << endl;
	cout << "================ Delete index column =============" << endl;
	IndexColDel(arr, rows, cols);
	cols--;
	Print(arr, rows, cols);
	cout << endl;
	cout << "================ Add index col =============" << endl;
	int* newCol2 = new int[rows];   // створюємо посилання на новий одновимірний  масив колонки
	FillNewArr(newCol2, rows);
	AddIndexCol(arr, newCol2, rows, cols);
	cols++;
	Print(arr, rows, cols);
	Delete(arr, rows);
	delete[] arr;

	system("pause");
	return 0;
}