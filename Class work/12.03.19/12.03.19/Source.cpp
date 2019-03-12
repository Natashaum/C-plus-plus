

/*# include <iostream>
# include <ctime>

	using namespace std;

	int main() {
		srand(unsigned(time(NULL)));

		int cols = 0;
		int rows = 0;

		cout << "Enter Rows: " << endl;
		cin >> rows;
		cout << "Enter Cols: " << endl;
		cin >> cols;


		int **arr = new int *[rows];

		for (int i = 0; i < rows; i++) {
			arr[i] = new int[cols];
		}

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				arr[i][j] = rand() % 10;
			}
		}

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}


		for (int i = 0; i < rows; i++) {
			delete[]arr[i];
		}



		delete[]arr;

		system("pause");
		return 0;
}*/

#include <iostream>
#include <ctime>

using namespace std;

void Create(int **arr, int &cols, int &rows) {

	cout << "Enter number of rows:  ";
	cin >> rows;
	cout << "Enter number of cols:  ";
	cin >> cols;

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
}

void Delete(int **&arr, int &cols, int &rows) {

	for (int i = 0; i < rows; i++) {
		delete arr[i];
	}
}

void Fill(int **&arr, const int rows, const int cols) {
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}
void Print(int **&arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j]<< "\t";
		}
		cout << endl;
	}
}

int main() {
	/*1.  Написати функції для роботи з динамічною матрицею :
	    Функція створення динамічної матриці розміром row x col
		Функція заповнення матриці
		Функція виводу матриці
		Функція доповнення матриці новим рядком
		Функція видалення з матриці рядка за вказаним номером
		Функція вставки нового рядка за вказаним номером
		Функція доповнення матриці новим стовпчиком
		Функція видалення з матриці стовпця за вказаним номером
		Функція вставки нового стовпця за вказаним номером*/
	srand(unsigned(time(NULL)));
	int rows = 0;
	int cols = 0;

	cout << "Enter number of rows:  ";
	cin >> rows;
	cout << "Enter number of cols:  ";
	cin >> cols;

	int **arr = new int *[rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	

	//Create(arr, rows, cols);
	Fill(arr, rows, cols);
	Print(arr, rows, cols);

	Delete(arr, rows, cols);

	delete[] arr;

	system("pause");
	return 0;
}