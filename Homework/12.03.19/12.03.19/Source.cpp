#include <iostream>
#include <ctime>

/*1.  �������� ������� ��� ������ � ��������� �������� :
		1. ������� ��������� �������� ������� ������� row x col
		2. ������� ���������� �������
		3. ������� ������ �������
		4. ������� ���������� ������� ����� ������
		5. ������� ��������� � ������� ����� �� �������� �������
		6. ������� ������� ������ ����� �� �������� �������
		7. ������� ���������� ������� ����� ����������
		8. ������� ��������� � ������� ������� �� �������� �������
		9. ������� ������� ������ ������� �� �������� �������*/

using namespace std;
//  1. ������� ��������� �������� ������� ������� row x col
void Create(int**& arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {   // ����� ������� �� ��������� ����� ���������
		arr[i] = new int[cols];
	}
}

void Delete(int**& arr, int rows) {   // �� ��������� ����� ������ �� ��������� ������ �� �� ����� ����� ���������

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
}
//  2. ������� ���������� �������
void Fill(int**& arr, int rows, int cols) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

//  3.  ������� ������ �������
void Print(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void FillNewArr(int*& arr, int cols) { //  �-� ��������� ������ ������������ ������, ���� �� ���� ������ �������� � ���������� �����
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}

//  4.  ������� ���������� ������� ����� ������
void AddFirstRow(int**& arr, int* newRow, int rows, int cols) {
	int** newarr = new int* [rows + 1];  // ��������� ��������� ��  ����� ����� ���������, ���� ���� �������� ���� ��������� (�� ���� ��� ������)
	Create(newarr, rows + 1, cols);   //   ��������� ������ ������ �� ���� ����� �������
	//newarr[0] = newRow;
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

//  5.  ������� ��������� � ������� ����� �� �������� �������
void IndexDelete(int**& arr, int rows, int cols, int index) {
	int** newarr = new int* [rows - 1];
	Create(newarr, rows - 1, cols);
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
//  6.  ������� ������� ������ ����� �� �������� �������
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
		newarr[index][j] = newRow[j];   // index - ����� �����  ���� �� ������ �������� 
	}

	for (int i = index + 1; i < rows + 1; i++) {
		for (int j = 0; j < cols; j++) {
			newarr[i][j] = arr[i - 1][j];
		}
	}
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

	int** arr = new int* [rows];  // ��������� ��������� �� ����� ���������, ���� ���� �������� ���� ���������

	Create(arr, rows, cols);
	Fill(arr, rows, cols);
	Print(arr, rows, cols);
	cout << endl;

	int* newRow = new int[cols];  // ��������� ��������� �� ����� ����������� �����, ���� ���� ������ ��������� � ��������� 2� ������� ����� � �������� �� ����� ���'��

	FillNewArr(newRow, cols);
	cout << "================ Add new row ============" << endl;
	AddFirstRow(arr, newRow, rows, cols);
	rows++;
	Print(arr, rows, cols);
	cout << endl;
	cout << "================ Delete index row =============" << endl;
	IndexDelete(arr, rows, cols, index);
	rows--;
	Print(arr, rows, cols);
	cout << endl;
	cout << "================ Add index row =============" << endl;

	AddNewRow(arr, rows, cols, index, newRow);
	rows++;
	Print(arr, rows, cols);

	Delete(arr, rows);
	delete[] arr;

	system("pause");
	return 0;
}