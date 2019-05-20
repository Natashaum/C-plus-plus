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
void Show(const Player & player) {
	cout << "Name:                        " << player.name 
		 <<"\nSurname:                     " <<  player.surname 
		 << "\nAge:                         " << player.age 
		 << "\nGames:                       " << player.games 
		 << "\nPoints:                      " << player.points 
		 << "\nAverage Points Per Game:     " << player.avgPointsPerGame << "\n" << endl;
}
double AveragePoint(int points, int games) {
	cout << points / games;
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
	player.avgPointsPerGame =  AveragePoint(player.points, player.games){
	cout << endl;
}
void SaveInFile(const Player & player) {
	ofstream out;  // out назва змінної
	out.open("file.txt", ios_base::out); //ios_base - клас зчитує режим
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
}