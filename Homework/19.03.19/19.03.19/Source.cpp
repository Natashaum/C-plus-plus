#include <iostream> 

using namespace std;

//   1) ���� �����. �������� �� ����� ������� ������. ��������� ��������� � ������ �����.
//      (������ 1.  ��������� ������ �� ������ ��������)
int main() {
	/*char text[255];
	int symbolNumber;
	cout << "Enter text! " << endl;
	cin >> text;
	cout << "Enter the symbol you want to delete: " << endl;
	cin >> symbolNumber;

	char newText[255] = "";

	for (int i = 0, j = 0; i < strlen(text); i++)
	{
		if (i != symbolNumber)
		{
			newText[j] = text[i];  // �������� ����� ��� �������, ���� ���������� ���� ��������
			j++;
		}
	}

	cout << newText << endl;


	system("pause");
	return 0;*/

	 //   ������ 2  - �������� ������� �����
	/*char text[255];
	char symbol;
	cout << "Enter text! " << endl;
	cin >> text;
	cout << "Enter the symbol you want to delete: " << endl;
	cin >> symbol;

	char newText[255] = "";

	for (int i = 0, j = 0; i < strlen(text); i++)
	{
		if (text[i] != symbol)
		{
			newText[j] = text[i];
			j++;
		}
	}

	cout << newText << endl;


	system("pause");
	return 0;
	*/

//  2) ��������� ��������, ��� ����� � ������ �����, � ���� ���� ���������� : ������� ��������� �������(whitespaces), 
//     ��������, �����������, ����� ����������.  �������� ������������� �����������.

	char text[255];
	cout << "Enter text! " << endl;
	cin.getline(text, 255);

	int countWhitespaces = 0;
	int countVowels = 0;
	int countConsonants = 0;
	int countPunctuationMarks = 0;

	char whitespaces[255] = " 	";    // ������ ��� ������ ����� � '���'
	char vowels[255] = "aeuioAEUIO";   // ������ ��� ������ ������
	char consonants[255] = "qwrtypsdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNM";  // ������ ��� ������ ���������
	char punctuationMarks[255] = ",.!?";
		
	for (int i = 0; i < strlen(text); i++)
	{
		if (strchr(whitespaces, text[i]) != NULL)  // strchr - ��������� �-�, ��� ���� ������ � ������. ���� ������ �, �� �-� ������� �������� �� �����. ���� ����, �� ������� Null
		{
			countWhitespaces++;
		}
		else if (strchr(vowels, text[i]) != NULL)
		{
			countVowels++;
		}
		else if (strchr(consonants, text[i]) != NULL)
		{
			countConsonants++;
		}
		else if (strchr(punctuationMarks, text[i]) != NULL)
		{
			countPunctuationMarks++;
		}
	}

	cout << "Count whitespaces: " << countWhitespaces << endl;
	cout << "Count vowels: " << countVowels << endl;
	cout << "Count consonants: " << countConsonants << endl;
	cout << "Count punctuation marks: " << countPunctuationMarks << endl;
	system("pause");
	return 0;
}
