//#include <iostream>
//using namespace std;
////void Foo();
////void Foo(int counter);
//int Foo(int counter);
//int i = 0;
//
//int main() {
//	//Foo(10);
//	//Foo();
//	Foo(10); // в () пишемо скільки раз нам потрібно викликати певну ф-ю;
//	system("pause");
//	return 0;
//}
///*void Foo() {   // перед тим як викликати цю ф-ю, треба оголосити глобальне "і", і викликати ф-ю в мейні;
//	cout << "Foo" << i++ << endl;
//	Foo(); // рекурсивна функція, яка викликає сама себе поки не закінчиться виділена для неї пам'ять;
//}*/
///*void Foo(int counter) {
//	counter--;//віднімається поки каунтер буде більший 0
//	cout << "Foo counter " << counter << endl;
//	if (counter > 0) {
//		Foo(counter);
//	}
//}*/
//int Foo(int counter) {
//	if (counter < 1) {
//		return 0;
//	}
//	counter--;
//	cout << "int Foo  " << counter<< endl; 
//	return Foo(counter);
//}*/

// Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні

/*int sum = 0;

int Sum(int a, int b){
	
	cout << a << " = " << b << endl;
	sum += a;
	if (a == b) {
		return sum;
	}

	return Sum(a + 1, b);

}
int main() {
	int rezult = Sum(5, 10);
	cout << rezult << endl;
	system("pause");
	return 0;
}*/

// Написати шаблон функцію для роботи з масивом:
// a. (або заповнення випадковими числами)  масиву
// b. виведення масиву на екран
// c. реалізувати можливість сортування масиву(зростання.спадання) по вибору користувача(вибір здійснюється за допомогою типу bool)

#include <iostream>
#include <ctime>

using namespace std;

template <typename T>
void FillArr(T arr) {
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 10 + 1;
}
template <typename T>
void PrintArr(T arr) {
	for (int i = 0; i < 10; i++) {
		cout << "Arr " << i << "   " << arr[i] << endl;
	}
	cout << "========================================>" << endl;
}
void Menu() {
	cout << " Choose the way you want sort the arrey: " << endl;
	cout << " Choose 1 to Sort Down " << endl;
	cout << " Choose 2 to Sort Up " << endl;
}

//void SortDown(int arr[], int n)
//{
//	
//}

int main() {
	srand(unsigned(time(NULL)));

	int arr[10];
	float arr[10];
	FillArr(arr);
	PrintArr(arr);
	float arr2[10];
	FillArr(arr2);
	PrintArr(arr2);
	Menu();

	system("pause");
	return 0;
}