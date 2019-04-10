#include "AddEll.h"

void AddElement(int*& arr, int size, int element)
{
	int* newarr = new int[size+1];
	for (int i = 0; i < size; i++) {
		newarr[i] = arr[i];
	}
	newarr[size] = element;
	delete[]arr;
	arr = newarr;
}

