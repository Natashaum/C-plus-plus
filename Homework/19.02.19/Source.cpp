#include <iostream>
using namespace std;

// 1. 	Используя указатели и оператор разыменования, определить наибольшее из двух чисел

/*void Max (int *pA, int *pB, int *pM) {
	if (*pA < *pB) {
		*pM = *pB;
	}
	else if (*pB < *pA) {
		*pM = *pA;
	}
}

int main() {
	int a = 0, b =0;
	cout << " Enter the first number: ";
	cin >> a;
	cout << endl;
	cout << " Enter the second number: ";
	cin >> b;
	cout << endl;
	
	int *pA = &a;
	int *pB = &b;
	int max = 0;
	int *pM = &max;

	Max(pA, pB, pM);
	cout << " Maximum value is: " << max << endl;
	cout << endl;
	system("pause");
	return 0;
}*/

//  2.	Используя указатели и оператор разыменования, обменять местами значения 3 - x переменных.

/*void Chandges(int* pA, int* pB, int* pC, int *pT ) {
	*pT = *pA;
	*pA = *pB;
	*pB = *pC;
	*pC = *pT;
}


int main() {
	int a = 0, b = 0, c = 0;
    int temp = 0;
	cout << " Enter the first number: ";
	cin >> a;
	cout << " A = " << a << endl;
	cout << " Enter the second number: ";
	cin >> b;
	cout << " B = " << b << endl;
	cout << " Enter the third number: ";
	cin >> c;
	cout << " C = " << c << endl;
	cout << endl;
	int *pT = &temp;
	int *pA = &a;
	int *pB = &b;
	int *pC = &c;


	cout << "------------ AFTER CHANGES ------------" << endl;
	Chandges(pA, pB, pC, pT);
	cout << " A = " << a << endl;
	cout << " B = " << b << endl;
	cout << " C = " << c << endl;
	cout << endl;
	system("pause");
	return 0;
}*/