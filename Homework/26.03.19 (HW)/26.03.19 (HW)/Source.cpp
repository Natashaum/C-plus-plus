#include <iostream>
#include <string>

using namespace std;

// �������� ��������, ��� ������ ��������� ����� � �������� ������������ ������� �������� � ���� ����������� ���������. ����������� ������� ��������� (��� ������ �� ϲ�). 

struct Address {
	string address;
	int houseNum;
	int FlatNum;
};
struct Person {
	string name;
	string surname;
};
struct TelDirectory {
	string peopleAmount;
	string UsersNum;
	void NumberOfUsers() {
		cout << "Enter Number Of Users in your Telephone Derectory:\n";
		cin >> UsersNum;
	}
	Person person;
	Address address;
};

int main() {
	
	
   
	
	system("pause");
	return 0;
}