
#include <iostream>
#include <ctime>
	using namespace std;

//1.  �� ��� ����� ǳ��� ���� ������� �������� ����������� ������ �� 0 �� 10.
//    ������ ��������� ������ ������� ��������(�������� 3), ��� ������������ �� ������ �����������,
//    ��� ��� ���������� �������� �� ������� ������. �������� ������ � �������.

const int NUMBER_PERSON = 3, NUMBER_POINTS = 10;

void  Menu();
void Points(int arr[NUMBER_PERSON][NUMBER_POINTS]);
void PrintResult(int arr[NUMBER_PERSON][NUMBER_POINTS]);
void Find(int arr[NUMBER_PERSON][NUMBER_POINTS]);



int main()
{
	int arr[NUMBER_PERSON][NUMBER_POINTS];
	srand(unsigned(time(NULL)));
	Menu();
	Points(arr);
	PrintResult(arr);
	cout << "------------------------------------------------" << endl;
	Find(arr);
	system("pause");
	return 0;
}


void Menu() {
	cout << "   \"Welcome to our contest!!!\"\n\n Three participants take part in the contest!\n  " << endl;
	cout << " Judges!  Appreciate the participants! \n " << endl;
}

void Points(int arr[NUMBER_PERSON][NUMBER_POINTS]) // ������� Points ������ ���� ��������
{
	for (int i = 0; i < NUMBER_PERSON; ++i)
	{
		for (int j = 0; j < NUMBER_POINTS; ++j)
		{
			arr[i][j] = rand() % 10 + 1;
		}
	}
}


void PrintResult(int arr[NUMBER_PERSON][NUMBER_POINTS])  // ������� PrintResult �������� ���� �� �����
{
	cout << " Participant's points: \n" << endl;
	for (int i = 0; i < NUMBER_PERSON; ++i)
	{
		for (int j = 0; j < NUMBER_POINTS; ++j)
		{
			cout <<" Participant " << i+1 << " = " << arr[i][j] << endl; // ��������� ���������� (����); i+1 - ����� �������� ������� (+1 ��� 1�� �������� �������� �� ������� 1);  arr[i][j] - ���� ��������
		}
	}
}

int Max(int arr[NUMBER_PERSON][NUMBER_POINTS], int i) {  //   �� ������� ������� ������������ ���; (int arr[NUMBER_PERSON][NUMBER_POINTS], int i) - ��������� �������, �� ���� ������;
	int max = 0;
	int MaxNum = 0;
	for (int j = 0; j < NUMBER_POINTS; j++) { // ����������� �� �������� ������ ��� ��������� ����������� ����
		if (max < arr[i][j]) {
			max = arr[i][j];
			MaxNum = max;
		}
	}
	return MaxNum;
}

int Min(int arr[NUMBER_PERSON][NUMBER_POINTS], int i) {   //   �� ������� ������� ��������� ���; (int arr[NUMBER_PERSON][NUMBER_POINTS], int i) - ��������� �������, �� ���� ������;
	int min = 0;
	int MinNum = 0;
	for (int j = 0; j < NUMBER_POINTS; j++) { // ����������� �� �������� ������ ��� ��������� �������� ���� 
		if (min > arr[i][j]) {
			min = arr[i][j];
			MinNum = min;
		}
	}
	return MinNum;
}

void Find(int arr[NUMBER_PERSON][NUMBER_POINTS]) //�� �-��� ��������� �������� ��� ���� ��� ���������� ���� � ̳� �������� 
{
	int counter = 0;
	int maxNum;
	int minNum;
	for (int i = 0; i < NUMBER_PERSON; ++i)
	{
		counter = 0; // ������ � ���� ��� ����, ��� ���� ����������� ���������� ���������� ������� �������� ���� ���������� ����� ������������ ���� ���������� �������� (��� ����� ������� ���� ��������� ��������)
		maxNum = Max(arr, i);  // ��������� �-��� Max (Max(arr, i) - �� ������� ((arr,i) ��������� ������� � ����� �� ������ ���������))
		minNum = Min(arr, i);  // ��������� �-��� Min (Min(arr, i) - �� ������� ((arr,i) ��������� ������� � ����� �� ������ ���������))
		for (int j = 0; j < NUMBER_POINTS; ++j)
		{	
			if (j != maxNum && j != minNum)
			{
				counter += arr[i][j];
			}
		}
		cout << "Average amount of points for \" Participant " << i + 1 << " \" = " << counter / 8 << endl;
	}
	cout << endl;
}

