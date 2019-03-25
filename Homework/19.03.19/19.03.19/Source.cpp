#include <iostream> 

using namespace std;

//   1) Дано рядок. Видалити із рядка заданий символ. Результат розмістити у новому рядку.
//      (Варіант 1.  Видалення тексту по номеру елемента)
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
			newText[j] = text[i];  // переписує текст без символа, який користувач хоче видалити
			j++;
		}
	}

	cout << newText << endl;


	system("pause");
	return 0;*/

	 //   Варіант 2  - Видаленя введеної букви
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

//  2) Розробити програму, яка зчитує з екрану рядок, а потім видає статистику : кількість пробільних символів(whitespaces), 
//     голосних, приголосних, знаків пунктуації.  Введення передбачається англомовним.

	char text[255];
	cout << "Enter text! " << endl;
	cin.getline(text, 255);

	int countWhitespaces = 0;
	int countVowels = 0;
	int countConsonants = 0;
	int countPunctuationMarks = 0;

	char whitespaces[255] = " 	";    // строка яка містить пробіл і 'таб'
	char vowels[255] = "aeuioAEUIO";   // Строка яка містить голосні
	char consonants[255] = "qwrtypsdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNM";  // строка яка містить приголосні
	char punctuationMarks[255] = ",.!?";
		
	for (int i = 0; i < strlen(text); i++)
	{
		if (strchr(whitespaces, text[i]) != NULL)  // strchr - бібліотечна ф-я, яка шукає символ в строці. Якщо символ є, то ф-я повертає вказівник на нього. Якщо немає, то повертає Null
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
