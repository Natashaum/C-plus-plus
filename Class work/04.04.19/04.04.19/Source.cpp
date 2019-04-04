#include <iostream>
#include <string>
#include <fstream>  // бібліотека для доступу до файлової системи
using namespace std;

/*int main() {
	// запис у файл
	string path = "DB.TXT";  //  "D:/DB.TXT";  -  таким чином зберігаємо на диск D
	ofstream  writeFile; //ofstream - клас, який входить в бібліотеку <fstream> // writeFile - об'єкт класу ofstream
	//writeFile.open(path);
	writeFile.open(path, ofstream::app);  // ofstream::app   - Дописує до написаного
	if (!writeFile.is_open()) {
		cout << "Can't open the file" << endl;
	}
	else {
		cout << "Works" << endl;
		writeFile << "Hi!"<< endl;
	}
	writeFile.close();
	system("pause");
}*/

/*int main() {
	// зчитування файла
	ifstream readFile; 
	string path = "DB.TXT";
	readFile.open(path);
	if (!readFile.is_open()){
		cout << "Can't open file!" << endl;
	}
	else {
	//char data;
	string data;
	/*while (readFile.get(data)) {
		cout << "Works!" << endl;
		cout << data << endl;
	}*/
	/*while (!readFile.eof()) {  //eof - працює до кінця файлу
		getline(readFile, data);
		cout << data << endl;
	}
}
	readFile.close();
	system("pause");
	return 0;
}*/

// Зробити мінімальний довідник. Ф-ю додавання і вивід інформації на екран. За допомогою файлів.

void People() {
	string name;
	string surname;
	string address;
	int telNum;
	cout << " Enter the Name: " << endl;
	cin >> name;
	cout << " Enter the Surname: " << endl;
	cin >> surname;
	cout << " Enter the Address: " << endl;
	cin >> address;
	cout << " Enter the Telephone Number: " << endl;
	cin >> telNum;
	cout << "Name: " << name << "\nSurname: " << surname << "\nAddress: " << address << "TelNumber" << telNum << endl;
	cout << "==================================================" << endl;

	string path = "ll.TXT";
	ofstream writeFile;
	writeFile.open(path, ofstream::app);
	if (!writeFile.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		for (;;) {
			writeFile << People << endl;
		}
	}
	writeFile.close();
}

int main() {
	People();
	system("pause");
	return 0;
}
