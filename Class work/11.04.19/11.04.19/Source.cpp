#include <iostream>
#include <stdlib.h>  // для роботи з ф-ю "малок"
using namespace std;

int main() {
	/*int *ptr = (int*)malloc(sizeof(int)); //виділення пам'яті  (використовується замість new int)
	*ptr = 10; //розіменований вказівник = 10
	cout << *ptr << "\n" << ptr << endl;
	free(ptr);  // чистимо пам'ять
	cout << *ptr << "\n" << ptr << endl;*/
	//=============================================================================================
	/*int *ptr = (int*)malloc(2*sizeof(int));
	ptr[0] = 10;
	ptr[1] = 20;
	cout << ptr[0] << endl;
	cout << ptr[1] << endl;*/
	//=============================================================================================
	int count = 2;
	int *ptr = (int*)calloc(count, sizeof(int)); // в caloc обнуляється значення вказівника
	ptr[0] = 5;
	ptr[1] = 6;
	cout << ptr[0] << endl;
	cout << ptr[1] << endl;
	
	ptr = (int*)realloc(ptr, 3*sizeof(int));   // перевиділити розмір під іншу к-сть (більшу, або меншу)
	ptr[0] = 8;
	ptr[1] = 9;
	ptr[2] = 10;
	cout << ptr[0] << endl;
	cout << ptr[1] << endl;
	cout << ptr[2] << endl;
	free(ptr);
	//=============================================================================================
	//=============================================================================================


	system("pause");
	return 0;
}