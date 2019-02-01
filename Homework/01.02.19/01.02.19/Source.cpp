
#include <iostream>
#include <ctime>
	using namespace std;

//1.  На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10.
//    Знайти підсумкову оцінку кожного учасника(учасників 3), яка обчислюється як середнє арифметичне,
//    але без врахування найкращої та найгіршої оцінок. Виконати задачу з функіями.

const int PERSON = 3, POINTS = 10;

void  Menu();
void Points(int arr[PERSON][POINTS], const int PERSON, const int POINTS);
void PrintResult(int arr[PERSON][POINTS], const int PERSON, const int POINTS);
void Find(int arr[PERSON][POINTS], const int PERSON, const int POINTS);



int main()
{
	int arr[PERSON][POINTS];

	Menu();
	Points(arr, PERSON, POINTS);
	PrintResult(arr, PERSON, POINTS);
	system("pause");
	return 0;
}


void Menu() {
	cout << "   \"Welcome to our contest!!!\"\n\n Three participants take part in the contest!\n\n  Participant 1\n  Participant 2\n  Participant 3\n" << endl;
	cout << "Judges!  Appreciate the participants!  " << endl;
}

void Points(int arr[PERSON][POINTS], const int PERSON, const int POINTS)
{
	srand(unsigned(time(NULL)));
	cout << "Participant's points: " << endl;
	for (int i = 0; i < PERSON; ++i)
	{
		for (int j = 0; j < POINTS; ++j)
		{
			arr[i][j] = rand() % 10 + 1;;
		}
	}
}


void PrintResult(int arr[PERSON][POINTS], const int PERSON, const int POINTS)
{
	cout << "Participant's points: " << endl;
	for (int i = 0; i < PERSON; ++i)
	{
		for (int j = 0; j < POINTS; ++j)
		{
			cout <<"arr [" << i << "]" << " = " << arr[i][j] << endl;
		}
	}
}


void Find(int arr[PERSON][POINTS], const int PERSON, const int POINTS)
{
	cout << "Participant's points: " << endl;
	for (int i = 0; i < PERSON; ++i)
	{
		for (int j = 0; j < POINTS; ++j)
		{
			
		}
	}
}

