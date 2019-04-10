#include "FillArr.h"
#include <iostream>
#include <ctime>
using namespace std;

void FillArr(int*& arr, int size) {
	
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}
}


