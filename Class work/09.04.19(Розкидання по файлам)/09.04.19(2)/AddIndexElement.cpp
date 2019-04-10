#include "AddIndexElement.h"

void AddIndexEl(int*& arr, int size, int value, int index)
{
	int* newarr = new int[size + 1];

	for (int i = 0; i < index; i++) {
		newarr[i] = arr[i];
	}
	newarr[index] = value;
	for (int i = size; i > index; i--) { //  або    for (int i = index + 1; i <= size; i++) {
		newarr[i] = arr[i - 1];
	}
	delete[]arr;
	arr = newarr;
}
