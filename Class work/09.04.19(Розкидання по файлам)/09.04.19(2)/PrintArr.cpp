#include "FillArr.h"
#include <iostream>
#include <ctime>
using namespace std;

void PrintArr(int *arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   " ;
	}
	cout << endl;
}