#include "MinusIndex Element.h"

void MinusIndexEl(int*& arr, int size, int index)
{
		int* newarr = new int[size - 1];
		for (int i = 0; i < index; i++) {
			newarr[i] = arr[i];
		}
		for (int i = index; i < size - 1; i++) {
			newarr[i] = arr[i + 1];
		}
		delete[]arr;
		arr = newarr;
}

