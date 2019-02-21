#include<iostream>
using namespace std;


//  1.Дано три числа.Оголосити вказівники на ці числа.Отримати добуток трьох заданих чисел, 
//   середє арифметичне, найменше з них, користуючись непрямим доступом до чисел(через вказівники).

/*void Dobutok(int *pA, int *pB, int *pC, int *pD) {

	*pD = *pA * *pB * *pC;
}
void Min(int *pA, int *pB, int *pC, int *pMin) {  

	if (*pA < *pB || *pA < *pC) {
		*pMin = *pA;
	}
	else if (*pB < *pA || *pB < *pC) {
		*pMin = *pB;
	}
	else if (*pC < *pA || *pC < *pB) {
		*pMin = *pC;
	}
}

int main() {
	int Dob = 0;
	int min = 0;
	int *pMin = &min;
	int a = 10, b = 20, c = 30;
	int *pA = &a, *pB = &b, *pC = &c;
	int *pD = &Dob; //ініціалізуємо вказівник по адресі (&Dob - адреса)
	Dobutok(pA, pB, pC, pD); // передаємо адрессу
	cout << " Dobutok = " << Dob << endl;  // Dob - те саме що і *pD
	cout << " Arithmathic mean = " << Dob / 3 << endl;
	Min(pA, pB, pC, pMin);
	cout << " Min number = " << min << endl;
	system("pause");
	return 0;
}*/

   //  2.Написать  калькулятор, пользуясь только указателями.

//void

int main() {
	int Dob = 0;
	int Sum = 0; 
	int Risn = 0;
	int Chast = 0;

	
	system("pause");
	return 0;
}
