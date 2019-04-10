#include "Menu.h"
#include <ctime>
#include "FillArr.h"
#include "PrintArr.h"
#include "AddEll.h"
#include "MinusIndex Element.h"
#include "AddIndexElement.h"
#include <iostream>
using namespace std;
void Menu(int*& arr)
{
	int size;
	int choice;
	bool isNew = false;

	for (;;) {
		cout << "  Press:\n 1 - (necessarily!!!) - to Fiil and Print Array\n 2 - to Add Element\n 3 - to Add Index Element\n 4 - to Delete Index Element \n 0 - to Exit!\n ";
		cin >> choice;

		if (choice == 0)
		{
			cout << "Bye!" << endl;
			break;
		}

		switch (choice) {
		case 1:
			int size;
			int element;
			cout << " Enter array size:  ";
			cin >> size;
			isNew = true; // якщо вид≥л€Їтьс€ пам'€ть п≥д динам≥чний масив, то в к≥нц≥ вид€л€Їтьс€. якщо н≥, то н≥.
			arr = new int[size];
			FillArr(arr, size);
			PrintArr(arr, size);
			break;
		case 2:
			cout << " Enter element you want to add:  ";
			cin >> element;
			AddElement(arr, size, element);
			size++;
			PrintArr(arr, size);
			break;
		case 3:
			int index;
			cout << "Enter the element you want to add:   ";
			cin >> element;
			cout << "Enter index of array you want to add the element.   ";
			cin >> index;
			AddIndexEl(arr, size, element, index);
			size++;
			PrintArr(arr, size);
			cout << endl;
			break;
		case 4:
			cout << "Enter index of element you want to delete:   ";
			cin >> index;
			MinusIndexEl(arr, size, index);
			size--;
			PrintArr(arr, size);
			cout << endl;
			break;
		default:
			cout << "You did wrong choice!\n Try again! " << endl;
			break;
		}
		system("pause");
		system("cls");
	}
	if (isNew == true)
	{
		delete[]arr;
	}
	system("pause");
}
