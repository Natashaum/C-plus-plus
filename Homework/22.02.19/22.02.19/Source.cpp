#include <iostream>
#include <ctime>
using namespace std;

/*int main() {
	const int size = 5;
	int arr[size] = { 2,8,16,27,92 };
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "]  " << arr[i] << endl;
	}
	cout << "arr address   " << arr << endl; // ������ ������� �������� ������ (��������� ������� ���� ���� + 4 ����� �� ��������)

	int *pArr = arr; //  ��������� ��������� ������ ����� ���������� ������  //� ������� ��������� �� �����

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "]  " << pArr[i] << endl;
	}

	cout << "pArr address   " << pArr << endl; // ������ ������� �������� ������ (���������) �� ��������� (��������� ������� ���� ���� + 4 ����� �� ��������)

	cout << "Arr [1] address = " << *(pArr + 1) << endl; // * �������� 1�� ��������
	cout << "Arr [2] address = " << *(pArr + 2) << endl; // * �������� 2�� ��������
	cout << "Arr [2] address = " << pArr + 2 << endl;   // ���� ������������ ��������, �� �������� ������
	cout << "=========================" << endl;
	for (int i = 0; i < size; i++) {
		cout << "pArr [" << i << "] address = " << (pArr +i ) << endl; // pArr+i - ������ ��� ������� ���� �������� ��������� �������
	}
	system("pause");
	return 0;
}*/

/*int main() {
	/*1. ���� ������������� ����������� �����.
	   ��������� ����, ������� �� ����� � ������� �� ����������� ������� �� ���������� ���� �������� � ������������� ���������.*/

	   /*int arr[5]{ 1,2,3,4,5 };
	   int *pArr = arr;
	   int sum = 0;
	   for (int i = 0; i < 5; i++) {
		   cout << "Arr [" << i << "]  = " << pArr[i] << endl;
		   sum += pArr[i];
	   }
	   cout << "Sum = " << sum << endl;

	   for (int i = 5 - 1; i >= 0; --i) {
		   cout << "Arr [" << i << "]  = " << pArr[i] << endl;
	   }


	   system("pause");
	   return 0;
   }*/
   /*  2. ���� ����������� �����. ������ �������� �� �������� �������� � ����� �� ������� �� � ����� ������.
		  ������� ������������ ����� �� �����*/
		  /*int main() {
			  int arr[5]{ 1,2,3,4,5 };
			  int *pArr = arr;
			  int temp = 0;
			  int max = 0;
			  int maxI = 0;
			  int min = 100; // ������ ��� ���� ��� ������������ ����� ���� �������� �������� ����� ����
			  int minI = 0;
			  for (int i = 0; i < 5; i++) {
				  cout << " Arr [" << i << "]  = " << pArr[i] << endl;
			  }
			  for (int i = 0; i < 5; i++) {
				  if (max < pArr[i]) {
					  max = pArr[i];
					  maxI = i;
				  }
			  }
			  for (int i=0; i < 5; i++){
				  if (min > pArr[i]) {
					  min = pArr[i];
					  minI = i;
				  }
				  }
			  cout << "------------------------" << endl;
				  cout << " Max [" << maxI << "] = "<< max << endl;
				  cout << " Min [" << minI << "] = "<< min << endl;
				  cout << endl;
				  cout << "-----After Changes-----" << endl;
				  cout << " Max [" << maxI << "] = " << min << endl;
				  cout << " Min [" << minI << "] = " << max << endl;
				  cout << endl;
			  system("pause");
			  return 0;
		  }*/

		  /* 3. ���� ��� ������, ������������� �� ��������� :
			 ��������� ����� �����, ���� ���������� � �������� ������ � � �, ������������� �� ���������.*/

			 /*void FillArr(int* pArr) {
				 for (int i = 0; i < 10; i++) {
					 *(pArr + i) = rand() % 10 + 1; // *(pArr+i) -  ������������ ��������(�� ������ �������� ����������� �� ������),
													 //               �� �� � ���� ���� � �� ������   arr[i]   � ���������� �����.
				 }
			 }

			 void PrintArr(int* pArr, int size) {
				 for (int i = 0; i < size; i++) {
					 cout << *(pArr + i) << "    " ;
				 }
			 }


			 //  �-� ���������� ������ ���������� �� ���������
			 void BubbleSort(int* pArr, int size) {
				 int temp;
				 for (int i = 0; i < size - 1; i++)
				 {
					 for (int j = 0; j < size - i - 1; j++)
					 {
						 if (*(pArr + j) > pArr[j + 1])
						 {
							 temp = *(pArr + j);
							 *(pArr + j) = pArr[j + 1];
							 pArr[j + 1] = temp;
						 }
					 }
				 }
			 }


			 int main() {
				 srand(unsigned(time(NULL)));
				 int arr[10];
				 int arr1[10];
				 int arr2[10];
				 int arr3[20];
				 int* pArr = arr;
				 int* pArr1 = arr1;
				 int* pArr2 = arr2;
				 int* pArr3 = arr3;
				 cout << "==================== 1st array ==================" << endl;
				 FillArr(pArr1);
				 PrintArr(pArr1, 10);
				 BubbleSort(pArr1, 10);
				 cout << endl;
				 cout << "-------------------------------------------------" << endl;
				 PrintArr(pArr1, 10);
				 cout << endl << endl;
				 cout << "==================== 2nd array ==================" << endl;
				 FillArr(pArr2);
				 PrintArr(pArr2, 10);
				 BubbleSort(pArr2, 10);
				 cout << endl;
				 cout << "-------------------------------------------------" << endl;
				 PrintArr(pArr2, 10);
				 cout << endl << endl;

				 cout << "==================== 3rd array ==================" << endl;
				 for (int i = 0; i < 10; i++) {
					 arr3[i] = pArr1[i];
				 }
				 for (int i = 10; i < 20; i++) {
					 arr3[i] = pArr2[i-10];
				 }

				 PrintArr(pArr3, 20);
				 cout << endl;
				 BubbleSort(pArr3, 20);
				 cout << "---------------------------------------------------------------------------------------------------" << endl;
				 PrintArr(pArr3, 20);
				 cout << endl;
				 cout << "===================================================================================================" << endl;
				 system("pause");
				 return 0;
			 }   */

			 /* 4. ���� ��� ������ : �[n] � B[m].�������� ����� ����� ���������� ��������� ������, � ����� ������ :
				   �������� ���� ������;
				   ����� �������� ���� ��������;
				   �������� ������ A, �� �� ������������ � B;
				   �������� ������ �, �� �� ������������ � �;
				   �������� ������ A � B, �� �� � �������� ��� ���(����� �ᒺ������ ���������� ���� �������� ����������).*/

/*#include <iostream>
#include <ctime>

using namespace std;

void FillArr(int* pArr, int size) {
	for (int i = 0; i < size; i++) {
		*(pArr + i) = rand() % 10 + 1; // *(pArr+i) -  ������������ ��������(�� ������ �������� ����������� �� ������),
										//               �� �� � ���� ���� � �� ������   arr[i]   � ���������� �����. 
	}
}

void PrintArr(int* pArr, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(pArr + i) << "    ";
	}
}

bool IsElementInArr(int* pArr, int el)  // �-� ��� �������� �������� 2� ���������� �������� � �����; el - �������� ��� �� ���������� �� � � �����
{
	for (int i = 0; i < 5; i++)
	{
		if (*(pArr + i) == el)
		{
			return true;
		}
	}
	return false;
}

int main() {
	srand(unsigned(time(NULL)));
	int arr[5];
	int arr1[5];
	int arr2[5];
	int arr3[10];
	int arr4[5]; //��� �� �� �� ����� ������ �������� ������ ����, �� � ������ ����� ������ ���� ��������;
	int arr5[5];
	int arr6[5];
	int arr7[10];
	int* pArr = arr;
	int* pArr1 = arr1;
	int* pArr2 = arr2;
	int* pArr3 = arr3;
	int* pArr4 = arr4;
	int* pArr5 = arr5;
	int* pArr6 = arr6;
	int* pArr7 = arr7;

	FillArr(pArr1, 5);
	FillArr(pArr2, 5);
	cout << "==================== 1st array ==================" << endl;
	PrintArr(pArr1, 5);
	cout << endl;
	cout << "==================== 2nd array ==================" << endl;
	PrintArr(pArr2, 5);
	cout << endl;
	cout << "====================== Elements of two arrays ========================" << endl;
	for (int i = 0; i < 5; i++) {
		arr3[i] = pArr1[i];
	}
	for (int i = 5; i < 10; i++) {
		arr3[i] = pArr2[i - 5];
	}
	PrintArr(pArr3, 10);
	cout << endl;
	cout << "=================== Common elements of both arrays ===================" << endl;
	int tempI = 0; // ������ ������, ���� �� �������� ������ ������� ����. 2� ������;
	for (int i = 0; i < 5; i++) {       // ������ ��� ����� ��� ����, ��� �������� �� ������� �������� ���� ������;  
		for (int j = 0; j < 5; j++) {
			if (*(pArr1 + i) == *(pArr2 + j)) { // ���������� �� � �������� �������� ������;
				if (!IsElementInArr(pArr4, *(pArr1 + i)))  // �-�;
				{
					*(pArr4 + tempI) = *(pArr1 + i);   // �������� ������� ����. 2� ������;
					tempI++;                           // ���� ������� ������� �������� � ����� �� '������' ���� �� ���� �������� ��������� ������� ����. 
				}
			}
		}
	}
	if (tempI == 0) {
		cout << " There are no any common elements! " << endl;
	}
	else
	{
		PrintArr(pArr4, tempI);
	}
	cout << endl;
	cout << "============= Elements of array A that isn't in arrey B  =============" << endl;
	int tempI5 = 0;
	bool isElementAinB; // ����� ��� �������� �������� �������� ������ � � ����� � 
	for (int i = 0; i < 5; i++) {      
		isElementAinB = false;  // ����������, �� �������� ��� � ���� � ��� �;
		for (int j = 0; j < 5; j++) {
			if (*(pArr1 + i) == *(pArr2 + j))
			{
				isElementAinB = true;
				break;
			}
		}
		if (isElementAinB == false)
		{
			if (!IsElementInArr(pArr5, *(pArr1 + i)))  // �-�;
			{
				*(pArr5 + tempI5) = *(pArr1 + i);   // ���������� �-��� �������� ������ ���� � � �, ��� ���� � ����� �;
				tempI5++;                           // ���� ������� �������� �� � � ����� �, ��� ���� � ���. � � ����� �� '������' ���� �� ���� �������� ����. 
			}
		}
	}
	PrintArr(pArr5, tempI5);
	cout << endl;

	cout << "============= Elements of array B that isn't in arrey A  =============" << endl;
	int tempI6 = 0;
	bool isElementBinA; // ����� ��� �������� �������� �������� ������ � � ����� � 
	for (int i = 0; i < 5; i++) {
		isElementBinA = false;  // isElementBinA - �����!!! ����������, �� �������� ���. B ���� � ���. A;
		for (int j = 0; j < 5; j++) {
			if (*(pArr1 + j) == *(pArr2 + i))
			{
				isElementBinA = true;
				break;
			}
		}
		if (isElementBinA == false)
		{
			if (!IsElementInArr(pArr6, *(pArr2 + i)))  // �-�;
			{
				*(pArr6 + tempI6) = *(pArr2 + i);   // ���������� �-��� �������� ������ ���� � � �, ��� ���� � ����� �;
				tempI6++;                           // ���� ������� �������� �� � � ����� �, ��� ���� � ���. � � ����� �� '������' ���� �� ���� �������� ����. 
			}
		}
	}
	PrintArr(pArr6, tempI6);
	cout << endl;

	cout << "================= No commom elements of both arrays ==================" << endl;

	for (int i = 0; i < tempI5; i++) {
		arr7[i] = pArr5[i];
	}
	for (int i = tempI5; i < tempI5 + tempI6; i++) {
		arr7[i] = pArr6[i - tempI5];
	}
	PrintArr(pArr7, tempI5 + tempI6);
	cout << endl;
	cout << "======================================================================" << endl;
	system("pause");
	return 0;
}*/

//   4�� ������ ����� ��������
//   4. ���� ��� ������ : �[n] � B[m].�������� ����� ����� ���������� ��������� ������, � ����� ������ :
//   �������� ���� ������;
//   ����� �������� ���� ��������;
//   �������� ������ A, �� �� ������������ � B;
//   �������� ������ �, �� �� ������������ � �;
//   �������� ������ A � B, �� �� � �������� ��� ���(����� �ᒺ������ ���������� ���� �������� ����������).
 
#include <iostream>
#include <ctime>

using namespace std;

void FillArr(int* pArr, int size) {
	for (int i = 0; i < size; i++) {
		*(pArr + i) = rand() % 10 + 1; // *(pArr+i) -  ������������ ��������(�� ������ �������� ����������� �� ������),
										//               �� �� � ���� ���� � �� ������   arr[i]   � ���������� �����.
	}
}

void PrintArr(int* pArr, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(pArr + i) << "    ";
	}
}
int main() {
	srand(unsigned(time(NULL)));
	int arr[5];
	int arr1[5];
	int arr2[5];
	int arr3[10];
	int* pArr = arr;
	int* pArr1 = arr1;
	int* pArr2 = arr2;
	int* pArr3 = arr3;

	FillArr(pArr1, 5);
	FillArr(pArr2, 5);
	cout << "==================== 1st array ==================" << endl;
	PrintArr(pArr1, 5);
	cout << endl;
	cout << "==================== 2nd array ==================" << endl;
	PrintArr(pArr2, 5);
	cout << endl;
	cout << "====================== Elements of two arrays ========================" << endl;
	for (int i = 0; i < 5; i++) {
		arr3[i] = pArr1[i];
	}
	for (int i = 5; i < 10; i++) {
		arr3[i] = pArr2[i - 5];
	}
	PrintArr(pArr3, 10);
	cout << endl;

	for (int i = 0; i < 10; i++) {

	//}
	system("pause");
	return 0;
}