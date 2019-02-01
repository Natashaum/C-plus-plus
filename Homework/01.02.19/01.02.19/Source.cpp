
#include <iostream>
#include <ctime>
	using namespace std;

//1.  На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10.
//    Знайти підсумкову оцінку кожного учасника(учасників 3), яка обчислюється як середнє арифметичне,
//    але без врахування найкращої та найгіршої оцінок. Виконати задачу з функіями.

const int NUMBER_PERSON = 3, NUMBER_POINTS = 10;

void  Menu();
void Points(int arr[NUMBER_PERSON][NUMBER_POINTS]);
void PrintResult(int arr[NUMBER_PERSON][NUMBER_POINTS]);
void Find(int arr[NUMBER_PERSON][NUMBER_POINTS]);



int main()
{
	int arr[NUMBER_PERSON][NUMBER_POINTS];
	srand(unsigned(time(NULL)));
	Menu();
	Points(arr);
	PrintResult(arr);
	cout << "------------------------------------------------" << endl;
	Find(arr);
	system("pause");
	return 0;
}


void Menu() {
	cout << "   \"Welcome to our contest!!!\"\n\n Three participants take part in the contest!\n  " << endl;
	cout << " Judges!  Appreciate the participants! \n " << endl;
}

void Points(int arr[NUMBER_PERSON][NUMBER_POINTS]) // Функція Points генерує очки учасників
{
	for (int i = 0; i < NUMBER_PERSON; ++i)
	{
		for (int j = 0; j < NUMBER_POINTS; ++j)
		{
			arr[i][j] = rand() % 10 + 1;
		}
	}
}


void PrintResult(int arr[NUMBER_PERSON][NUMBER_POINTS])  // Функція PrintResult виводить очки на екран
{
	cout << " Participant's points: \n" << endl;
	for (int i = 0; i < NUMBER_PERSON; ++i)
	{
		for (int j = 0; j < NUMBER_POINTS; ++j)
		{
			cout <<" Participant " << i+1 << " = " << arr[i][j] << endl; // виведення результату (бали); i+1 - номер учасника змагань (+1 щоб 1го учасника виводило під номером 1);  arr[i][j] - бали учасника
		}
	}
}

int Max(int arr[NUMBER_PERSON][NUMBER_POINTS], int i) {  //   Ця функція визначає максимальний бал; (int arr[NUMBER_PERSON][NUMBER_POINTS], int i) - параметри функції, які вона приймає;
	int max = 0;
	int MaxNum = 0;
	for (int j = 0; j < NUMBER_POINTS; j++) { // проходимось по колонках масиву щоб визначити максимальне очко
		if (max < arr[i][j]) {
			max = arr[i][j];
			MaxNum = max;
		}
	}
	return MaxNum;
}

int Min(int arr[NUMBER_PERSON][NUMBER_POINTS], int i) {   //   Ця функція визначає мінімальний бал; (int arr[NUMBER_PERSON][NUMBER_POINTS], int i) - параметри функції, які вона приймає;
	int min = 0;
	int MinNum = 0;
	for (int j = 0; j < NUMBER_POINTS; j++) { // проходимось по колонках масиву щоб визначити мінімальне очко 
		if (min > arr[i][j]) {
			min = arr[i][j];
			MinNum = min;
		}
	}
	return MinNum;
}

void Find(int arr[NUMBER_PERSON][NUMBER_POINTS]) //Ця ф-ція знаходить значення всіх очків без урахування Макс і Мін значення 
{
	int counter = 0;
	int maxNum;
	int minNum;
	for (int i = 0; i < NUMBER_PERSON; ++i)
	{
		counter = 0; // пишемо у циклі для того, щоб після підрахування загального результату кожного учасника бали обнулялися перед підрахуванням балів наступного учасника (без цього враховує бали попередніх учасників)
		maxNum = Max(arr, i);  // викликаємо ф-цію Max (Max(arr, i) - це функція ((arr,i) параметри функції з якими ми будемо працювати))
		minNum = Min(arr, i);  // викликаємо ф-цію Min (Min(arr, i) - це функція ((arr,i) параметри функції з якими ми будемо працювати))
		for (int j = 0; j < NUMBER_POINTS; ++j)
		{	
			if (j != maxNum && j != minNum)
			{
				counter += arr[i][j];
			}
		}
		cout << "Average amount of points for \" Participant " << i + 1 << " \" = " << counter / 8 << endl;
	}
	cout << endl;
}

