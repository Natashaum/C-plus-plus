// Створити 3 динамічних змінних різного типу. Заповнити їх деякими значеннями. Обчислити і вивести на екран їх добуток, а також самі значення динамічних змінних

#include <iostream>
using namespace std;

int main() {
	int* pa = new int;
	float* pb = new float;
	double* pc = new double;

	*pa = 5;
	*pb = 5.5;
	*pc = 55.5;
	cout << "*pa value = " << *pa << endl;
	cout << "*pb value = " << *pb << endl;
	cout << "*pc value = " << *pc << endl;
	cout << "Dob = " << *pa * *pb * *pc << endl;
	delete new int;
	delete new float;
	delete new double;
	 
	system("pause");
	return 0;
}