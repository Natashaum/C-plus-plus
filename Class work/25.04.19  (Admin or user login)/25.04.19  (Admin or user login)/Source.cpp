#include<iostream>
#include<string>
#include<fstream>

using namespace std;
// для адміністратора розширені права, для користувача обмежені права
// зробити перевірку логінів і паролів і перевірити чи є такий користувач у файлі
// якщо є, то я відкриваю програму для користувача, якщо ні, то просить ввести ще раз (до 3х раз), якщо 3 рази не вірно, то виходить з програми 

void CheckUser() {
	string data;
	string login;
	string password;
	cout << "Enter Login:   " << endl;
	cin >> login;
	cout << "Enter Password" << endl;
	cin >> password;
	cout << "Your Login:  " << login << endl;
	cout << "Your Password:  " << password << endl;
	cout << "-------------------------------" << endl;

	ifstream readFile;
	string path = "DB.TXT";
	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		
		while (!readFile.eof()) {
			getline(readFile, data);
			
			if (data == login) {
				cout << data << endl;
				cout << "Login is correct!" << endl;;

			}
			getline(readFile, data);
			if (data == password) {
				cout << data << endl;
				cout << "Password is correct!" << endl;
			}
		}
	}
	readFile.close();
}


int main() {
	CheckUser();
	

	system("pause");
	return 0;
}
