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

//  3.	Написать примитивный калькулятор, пользуясь только указателями.

int Menu() {
	int choice = 0;
	cout << "  ***  Choose the action you need to do: ***" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "1. Addition        \"+\" \n2. Subtraction     \"-\"\n3. Multiplication  \"*\"\n4. Division        \"/\"\n5. Exit!" << endl << endl;

	cin >> choice;
	return choice;
}
template <typename T>
void Sum(T * pA, T* pB, T* pS) {
	cout << "Enter the first number: " << endl;
	cin >> *pA;
	cout << "Enter the secont number: " << endl;
	cin >> *pB;
	*pS = *pA + *pB;
}

template <typename T>
void Risn(T* pA, T* pB, T* pR) {
	cout << "Enter the first number: " << endl;
	cin >> *pA;
	cout << "Enter the secont number: " << endl;
	cin >> *pB;
	*pR = *pA - *pB;
}

template <typename T>
void Dob(T* pA, T* pB, T* pD) {
	cout << "Enter the first number: " << endl;
	cin >> *pA;
	cout << "Enter the secont number: " << endl;
	cin >> *pB;
	*pD = *pA * *pB;
}

template <typename T>
void Chast(T* pA, T* pB, T* pCh) {
	cout << "Enter the first number: " << endl;
	cin >> *pA;
	cout << "Enter the secont number: " << endl;
	cin >> *pB;
	*pCh = *pA / *pB;
}


int main() {
	int dob = 0;
	int sum = 0;
	int risn = 0;
	int chast = 0;
	int a = 0;
	int b = 0; 
	int* pA = &a;
	int* pB = &b;
	int* pS = &sum;
	int* pR = &risn;
	int* pD = &dob;
	int* pCh = &chast;
	


	for (;;) {
		int choice = Menu();

		if (choice == 1) {
			cout << " You want to Add (+) numbers!" << endl;
			cout << "------------------------------" << endl;
			Sum(pA, pB, pS);
			cout << "Sum = " << sum <<endl;
		}
		else if (choice == 2) {
			cout << " You want to Subtract (-) numbers!" << endl;
			cout << "-----------------------------------" << endl;
			Risn (pA, pB, pR);
			cout << "Risnutsia = " << risn << endl;
		}
		else if (choice == 3) {
			cout << " You want to Multiply (*) numbers!" << endl;
			cout << "-----------------------------------" << endl;
			Dob(pA, pB, pD);
			cout << "Dobutok = " << dob << endl;
		}
		else if (choice == 4) {
			cout << " You want to Divide (/) numbers!" << endl;
			cout << "-----------------------------------" << endl;
			Chast(pA, pB, pCh);
			cout << "Chastka = " << chast << endl;
		}
		else if (choice == 5) {
			cout << "  \" See you! \"\n \" Good Luck!  ;)\"" << endl << endl;
			break;
		}
		else {
			cout << "\" You've chosen wrong number! \"\n \" Press any key to try again \" " << endl;
		}

		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}

