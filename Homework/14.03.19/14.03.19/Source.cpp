/*  �������� ��������, ��� ������ �� ����������� �������� ���� c������, ����� ���� �� �������� �� ����� ������������� �����.
    ��� ���������� ������������ ���������� ������������� ���������� ++, --, ��������� ��� ��������� �� ����� ����� ����.
	���������, ��� �������� AB� �� ������ ���� ���. */

#include <iostream>
using namespace std;
int main() {
	char text[255];  // ��������� ����� � ��� ����� �������� �����
	cout << "Enter your text:\n----------------" << endl;

	cin.getline(text, 255);   // ��� ��������� ����� � �������� (������   cin >> text;  )
	cout << text << endl;
	

	for (int i = 0; i < strlen(text); i++)
	{
		text[i] = text[i]++;
	}
	cout << "===========================================" << endl;
	cout << "Encrypted text:\n---------------\n" << text << endl;
	

	for (int i = 0; i < strlen(text); i++)
	{
		text[i] = text[i]--;
	}
	cout << "===========================================" << endl;
	cout <<  "Decoded text:\n-------------\n" << text << endl;
	cout << "===========================================" << endl;
	system("pause");
	return 0;
 }