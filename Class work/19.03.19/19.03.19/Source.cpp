#include <iostream>
#include <string>   // клас для роботи зі строками
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
int main(){
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
}