#include <iostream>
#include <string>   // клас для роботи зі строками
#include <cctype>   // для функции toupper перевід з великої букви в маленьку і навпаки 
using namespace std;

/*int Strlength(char *str) {
	int counter = 0;
	while (str[counter] != '\0') { // рахує символи до 0 термінатора
		counter++;

	}
	return counter; // повертає к-сть введених символів
}
*/

/*int main() {
	char str[255];
	cout << "Enter text: " << endl;
	cin >> str;
	cout << Strlength(str) << endl;*/

	/*char str1[255];
	char str2[255];
	cout << "Enter the first string" << endl;
	cin >> str1;
	cout << "Enter the second string" << endl;
	cin >> str2;

	strcat_s(str1, str2);   // вбудована бібліотечна ф-я, яка об'єднує текст(слова)
	cout << str1 << endl;*/

	/*string str = "Hello";
	string str1 = "world";
	string res = str + "  " + str1 + "  "+ "text";  //таким чином ми добавляємо пробіли
	cout << res  << endl;*/


	//   1. Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?
   /*int main(){
	   char text[255];
	   int counter = 0;
	   int counter1 = 0;
	   cout << "Enter text! " << endl;
	   cin >> text;

	   for (int i = 0; i < strlen(text); i++) {
		   if (text[i] == 65 || text[i] == 97) {

			   counter++;
		   }
		   else if (text[i] == 79 || text[i] == 111) {

			   counter1++;
		   }
	   }
	   cout << "A = " << counter << endl;
	   cout << "O = " << counter1 << endl;
	   if (counter > counter1) {
		   cout << " 'A' letters are more then 'O' letters " << endl;
	   }
	   else if (counter1 > counter) {
		   cout << " 'O' letters are more then 'A' letters " << endl;
	   }



	   system("pause");
	   return 0;
   }*/


   // 2. Вводиться рядок. Порахувати кількість латинських букв, цифр та розділових знаків у рядку.

   /*int main() {
	   char text[255];
	   int counter1 = 0;
	   int counter2 = 0;
	   int counter3 = 0;
	   char alphabet[255] = "qwrtypsdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNMaeuioAEUIO";  // строка яка містить великі і маленькі букви алфавіту
	   char punctuationMarks[255] = ",.?!;:'";     // строка яка містить знаки пунктуації
	   cout << " Enter the text:  "<< endl;
	   cin.getline(text, 255);    // зчитує текст з пробілами

	   for (int i = 0; i < strlen(text); i++) {
		   if (strchr(alphabet, text[i]) != NULL)
		   {
			   counter1++;
		   }
		   else if (strchr(punctuationMarks, text[i]) != NULL)
		   {
			   counter2++;
		   }
	   }
	   cout << "Count alphabet: " << counter1 << endl;
	   cout << "Count punctuation marks: " << counter2 << endl;
	   system("pause");
	   return 0;
   }*/

   // 3. Вводиться рядок. Порахувати кількість латинських букв, цифр та розділових знаків у рядку.
   //    Дано рядок. Замінити у рядку всі великі букви на малі і навпаки.

int main() {
	char text[255];
	int counter1 = 0;
	int counter2 = 0;
	int counter3 = 0;
	char alphabet[255] = "qwrtypsdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNMaeuioAEUIO";  // строка яка містить великі і маленькі букви алфавіту
	char punctuationMarks[255] = ",.?!;:'";     // строка яка містить знаки пунктуації
	char capital[255] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lowercase[255] = "abcdefghijklmnopqrstuvwxyz";
	cout << " Enter the text:  " << endl;
	cin.getline(text, 255);    // зчитує текст з пробілами

	for (int i = 0; i < strlen(text); i++) {
		if (strchr(alphabet, text[i]) != NULL)
		{
			counter1++;
		}
		else if (strchr(punctuationMarks, text[i]) != NULL)
		{
			counter2++;
		}
	}

	for (int i = 0; i < strlen(text); i++)
	{
		if (islower(text[i]))
		{
			text[i] = toupper(text[i]);
		}
		else if (isupper(text[i]))
		{
			text[i] = tolower(text[i]);
		}
	}

	cout << "Count alphabet: " << counter1 << endl;
	cout << "Count punctuation marks: " << counter2 << endl;

	cout << text << endl;

	system("pause");
	return 0;
}