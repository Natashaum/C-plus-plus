#include <iostream>
#include <string>
using namespace std;

/*struct Dog {
	string name;
	string breed;
	string Description;
	int age;
	void ShowInfo() {
		cout << "Name: " << name << "     Breed:  " << breed << "     Age:  " << age  << endl;
	}
	void ShowDescription() {
		cout << name << " Description:   " << Description << endl;
	}
	void SetDescription(string Desc) {  //ф-я для додаткового опису;
		Description = Desc;
	}
};

int main() {
	Dog Tuzic;   // створення структури
	Tuzic.name = "Tuzik";
	Tuzic.breed = "Taxa";
	Tuzic.age =  2;
	Tuzic.ShowInfo();
	Dog Bobik;   // створення структури
	Bobik.name = "Bobik";
	Bobik.breed = "Dog";
	Bobik.age = 12;
	Bobik.ShowInfo();
	Tuzic.age = 5;
	Bobik.age = 15;
	Tuzic.ShowInfo();
	Bobik.ShowInfo();
	string BobikDesk;
	cout << " Add the information about the dog: " << endl;
	cin >> BobikDesk;
	Bobik.SetDescription(BobikDesk);
	Bobik.ShowDescription();
	system("pause");
	return 0;
}*/

/*#include <iostream>
#include <string>

using namespace std;


struct Address {
	string country;
	string region;
	string city;
	string street;
	int zipCode;
	void ShowAddressInfo() {
		cout << "Country: " << country << "\nRegion: " << region << "\nCity: " << city << "\nStreet: " << street << "\nZipCode: " << zipCode << endl;
	}
};

struct Person {
private:
	string name;
	string surname;
	int age;
public:
	void ShowPersonInfo() {
		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;
	}
	void SetName(string newName) {
		name = newName;
	}
	void SetSurname(string newSurname) {
		surname = newSurname;
	}
	void SetAge(int newAge) {
		if (newAge >= 120 || newAge <= 0) {
			cout << "Incorrect age!" << endl;
		}
		else {
			age = newAge;
		}
	}
	int GetAge() {
		return age;
	}
	Address address;
};


int main() {

	Person Bill;
	//Bill.name = "Bill";
	//Bill.surname = "Gates";
	//Bill.age = 59;

	Bill.SetAge(90);
	//int billAge = Bill.GetAge();
	//cout << "Bill Age: " << billAge << endl;

	Bill.SetName("Bill");
	Bill.SetSurname("Gates");
	Bill.SetAge(60);
	Bill.ShowPersonInfo();
	Bill.address.country = "USA";
	Bill.address.region = "CA";
	Bill.address.city = "LA";
	Bill.address.street = "S. Banderu";
	Bill.address.zipCode = 43212;
	Bill.address.ShowAddressInfo();



	Person Stive;
	Stive.SetName("Stive");
	Stive.SetSurname("Balmar");
	Stive.SetAge(57);
	Stive.ShowPersonInfo();
	Stive.address.country = "USA";
	Stive.address.region = "CA";
	Stive.address.city = "SF";
	Stive.address.street = "R. Shuhevucha";
	Stive.address.zipCode = 345435;
	Stive.address.ShowAddressInfo();

	system("pause");
	return 0;
}*/

// Створити структуру, яка описує тварину(назва, клас, кличка).
// Створити функції для роботи з цією структурою(заповнення об’єкта, вивід на екран даних про об’єкт, функція «подати голос»).
struct Animal {
	string name;
	string animalType;
	string nickName;
	string voice;

	void ShowInfo() {
		cout << "Name:            " << name << "\nType of animal:  " << animalType << "\nNickName:        " << nickName;
	}

	void Voice()
	{
		cout << "Voice:           "<< voice;
	}
};


int main() {
	Animal cat;
	cat.name = "Murchyk";
	cat.animalType = "Mammal";
	cat.nickName = "Mur Mur";
	cat.voice = "Meow";
	cat.ShowInfo ();
	cout << endl;
	cat.Voice();
	cout << endl<<endl;

	Animal dog;
	dog.name = "Rex";
	dog.animalType = "Mammal";
	dog.nickName = "Bark";
	dog.voice = "Bark, bark";
	dog.ShowInfo();
	cout << endl;
	dog.Voice();
	cout << endl<<endl;

	Animal fox;
	fox.name = "Red Fox";
	fox.animalType = "Mammal";
	fox.nickName = "Red";
	fox.voice = "Bark";
	fox.ShowInfo();
	cout << endl;
	fox.Voice();
	cout << endl<<endl;
	system("pause");
	return 0;
}