/*#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Player {

	string name;
	string surname;
	int age;
	int games;
	int points;
	double avgPointsPerGame;
};
void Show(const Player & player) {
	cout << "Name:                        " << player.name 
		 <<"\nSurname:                     " <<  player.surname 
		 << "\nAge:                         " << player.age 
		 << "\nGames:                       " << player.games 
		 << "\nPoints:                      " << player.points 
		 << "\nAverage Points Per Game:     " << player.avgPointsPerGame << "\n" << endl;
}
double AveragePoint(int points, int games) {
	return points / games;
}
void Fill(Player & player) {
	cout << "Enter player's name:  ";
	cin >> player.name;
	cout << "\nEnter player's surname:  ";
	cin >> player.surname;
	cout << "\nEnter player's age:  ";
	cin >> player.age;
	cout << "\nEnter player's games:  ";
	cin >> player.games;
	cout << "\nEnter player's points:  ";
	cin >> player.points;
	player.avgPointsPerGame = AveragePoint(player.points, player.games);
	cout << endl;
}
void SaveInFile(const Player & player) {
	ofstream out;  // out ����� �����
	out.open("file.txt", ios_base::out); //ios_base - ���� ����� �����
	if (!out.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		out << player.name << endl;
		out << player.surname << endl;
		out << player.age << endl;
		out << player.games << endl;
		out << player.points << endl;
		out << player.avgPointsPerGame << endl;
		out.close();
	}
}
void LoudFromFile(Player & player) {
	ifstream in;
	in.open("file.txt", ios_base::in);
	if (!in.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		in >> player.name;
		in >> player.surname;
		in >> player.age;
		in >> player.games;
		in >> player.points;
		in >> player.avgPointsPerGame;
		in.close();
	}
}
int main(){
	
	Player player;

   Fill(player);
   Show(player);
   SaveInFile(player);
   LoudFromFile(player);

	system("pause");
	return 0;
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*�� ������ ����� ��������� ������ � ������ ��������� �� ��������� ��������� / ��������� / ������ / ��������� ������ ���������� ���������

� main ������� ��������� ����� ����� �������� ������� 10:
const int size = 10;
Player playerArr[10];

������� ��������� ���������� ��� ������ � ��� :

1 - �������� �������, ��� ���� ����������� �������� � �����(������������ ������� Fill ��� Create)
2 - ������� ��� ������ ������ ������ �� �����(����� ���� ����������������� �������� ������� ��� ������)
3 - ����� ������ � ����(����������� Save)
4 - ���������� ������ � �����(����������� Load)*/


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Player {

	string name;
	string surname;
	int age;
	int games;
	int points;
	double avgPointsPerGame;
};
void Show(const Player& player) {
	cout << "Name:                        " << player.name
		<< "\nSurname:                     " << player.surname
		<< "\nAge:                         " << player.age
		<< "\nGames:                       " << player.games
		<< "\nPoints:                      " << player.points
		<< "\nAverage Points Per Game:     " << player.avgPointsPerGame << "\n" << endl;
}
double AveragePoint(int points, int games) {
	return points / games;
}
void Fill(Player& player) {
	
		cout << "Enter player's name:  ";
		cin >> player.name;
		cout << "\nEnter player's surname:  ";
		cin >> player.surname;
		cout << "\nEnter player's age:  ";
		cin >> player.age;
		cout << "\nEnter player's games:  ";
		cin >> player.games;
		cout << "\nEnter player's points:  ";
		cin >> player.points;
		player.avgPointsPerGame = AveragePoint(player.points, player.games);
		cout << endl;
}
void SaveInFile(Player* player, int size) {
	ofstream out;  // out ����� �����
	out.open("file.txt", ios_base::out); //ios_base - ���� ����� �����
	if (!out.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		out << size << endl;
		for (int i = 0; i < size; i++) {
			out << player[i].name << endl;
			out << player[i].surname << endl;
			out << player[i].age << endl;
			out << player[i].games << endl;
			out << player[i].points << endl;
			out << player[i].avgPointsPerGame << endl;
		}
		out.close();
	}
}


void LoudFromFile(Player * player, int size) {
	ifstream in;
	in.open("file.txt", ios_base::in);
	if (!in.is_open()) {
		cout << "Can't open file!" << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			in >> player[i].name;
			in >> player[i].surname;
			in >> player[i].age;
			in >> player[i].games;
			in >> player[i].points;
			in >> player[i].avgPointsPerGame;
		}
		in.close();
	}
}
int main() {

	const int size = 10;
	Player player[5];
	for (int i = 0; i < size; i++) {
		Fill(player[0]);
	}
	Show(player[0]);
	SaveInFile(player, size);
	LoudFromFile(player, size);

	system("pause");
	return 0;
}