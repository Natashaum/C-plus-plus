/*#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}

double sum(double a, double b) {
	return a + b;
}
int sum(int a, int b, int c) {
	return a + b + c;
 }

int main() {
	cout << sum(5, 10) << endl;
	cout << sum(5.4, 8.1) << endl;
	cout << sum(8, 2, 16) << endl;
	
	system("pause");
	return 0;
}*/

//  1. Написти калькулятор з використанням перевантажених(overload) функцій.Додати можливість працювати з 3 - ма числами
/*#include<iostream>
using namespace std;

int Menu() {
	int choice = 0;
	cout << "  ***  Choose the action you need to do: ***" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "1. Addition        \"+\" \n2. Subtraction     \"-\"\n3. Multiplication  \"*\"\n4. Division        \"/\"\n5. Exit!" << endl << endl;

	cin >> choice;
	return choice;
}

int Addition(int a, int b) {
	return a + b;
}
double Addition(double a, double b) {
	return a + b;
}
int Addition(int a, int b, int c) {
	return a + b + c;
}
double Addition(double a, double b, double c) {
	return a + b + c;
}
int Subsrtaction(int a, int b) {
	return a - b;
}
double Subsrtaction(double a, double b) {
	return a - b;
}
int Subsrtaction(int a, int b, int c) {
	return a - b - c;
}
double Subsrtaction(double a, double b, double c) {
	return a - b - c;
} 
int Multiplication(int a, int b) {
	return a * b;
}
double Multiplication(double a, double b) {
	return a * b;
}
int Multiplication(int a, int b, int c) {
	return a * b * c;
}
double Multiplication(double a, double b, double c) {
	return a * b * c;
}
int Division(int a, int b) {
	return a / b;
}
double Division(double a, double b) {
	return a / b;
}
int Division(int a, int b, int c) {
	return a / b / c;
}
double Division(double a, double b, double c) {
	return a / b / c;
}


int main() {
  int choice = Menu();
  cout << choice;
  for (;;) {
	  if (choice == 1) {
		  int choice = 0;
		  cout << "  Do you want to add int or double numbers?\n If your number is int - press \'1\'\n If your number is double - press - 2\n If you want to work with three int numbers - press 3\n If you want to work with three float numbers - press 4\n If you want \'Exit\' press 5\n" << endl;
		  cin >> choice;
		  if (choice == 1) {
			  int a, b;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << Addition(a, b) << endl;
		  }
		  else if (choice == 2) {
			  double a, b;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << Addition(a, b) << endl;
		  }
		  else if (choice == 3) {
			  int a, b, c;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << " Enter the third number:" << endl;
			  cin >> c;
			  cout << Addition(a, b, c) << endl;
		  }
		  else if (choice == 4) {
			  double a, b, c;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << " Enter the third number:" << endl;
			  cin >> c;
			  cout << Addition(a, b, c) << endl;
		  }
		  else if (choice == 5) {
			  cout << " Good bye !!!" << endl;
			  cout << " Enter the second number:" << endl;
		  }
	  }
	  if (choice == 2) {
		  int choice = 0;
		  cout << "  Do you want to Substract int or double numbers?\n If your number is int - press \'1\'\n If your number is double - press - 2\n If you want to work with three int numbers - press 3\n If you want to work with three float numbers - press 4\n If you want \'Exit\' press 5\n" << endl;
		  cin >> choice;
		  if (choice == 1) {
			  int a, b;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << Subsrtaction(a, b) << endl;
		  }
		  else if (choice == 2) {
			  double a, b;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << Subsrtaction(a, b) << endl;
		  }
		  else if (choice == 3) {
			  int a, b, c;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << " Enter the third number:" << endl;
			  cin >> c;
			  cout << Subsrtaction(a, b, c) << endl;
		  }
		  else if (choice == 4) {
			  double a, b, c;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << " Enter the third number:" << endl;
			  cin >> c;
			  cout << Subsrtaction(a, b, c) << endl;
		  }
		  else if (choice == 5) {
			  cout << " Good bye !!!" << endl;
			  cout << " Enter the second number:" << endl;
		  }
	  }
	  if (choice == 3) {
		  int choice = 0;
		  cout << "  Do you want to multiply int or double numbers?\n If your number is int - press \'1\'\n If your number is double - press - 2\n If you want to work with three int numbers - press 3\n If you want to work with three float numbers - press 4\n If you want \'Exit\' press 5\n" << endl;
		  cin >> choice;
		  if (choice == 1) {
			  int a, b;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << Multiplication(a, b) << endl;
		  }
		  else if (choice == 2) {
			  double a, b;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << Multiplication(a, b) << endl;
		  }
		  else if (choice == 3) {
			  int a, b, c;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << " Enter the third number:" << endl;
			  cin >> c;
			  cout << Multiplication(a, b, c) << endl;
		  }
		  else if (choice == 4) {
			  double a, b, c;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << " Enter the third number:" << endl;
			  cin >> c;
			  cout << Multiplication(a, b, c) << endl;
		  }
		  else if (choice == 5) {
			  cout << " Good bye !!!" << endl;
			  cout << " Enter the second number:" << endl;
		  }
	  }
	  if (choice == 4) {
		  int choice = 0;
		  cout << "  Do you want to multiply int or double numbers?\n If your number is int - press \'1\'\n If your number is double - press - 2\n If you want to work with three int numbers - press 3\n If you want to work with three float numbers - press 4\n If you want \'Exit\' press 5\n" << endl;
		  cin >> choice;
		  if (choice == 1) {
			  int a, b;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << Division(a, b) << endl;
		  }
		  else if (choice == 2) {
			  double a, b;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << Division(a, b) << endl;
		  }
		  else if (choice == 3) {
			  int a, b, c;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << " Enter the third number:" << endl;
			  cin >> c;
			  cout << Division(a, b, c) << endl;
		  }
		  else if (choice == 4) {
			  double a, b, c;
			  cout << " Enter the first number:" << endl;
			  cin >> a;
			  cout << " Enter the second number:" << endl;
			  cin >> b;
			  cout << " Enter the third number:" << endl;
			  cin >> c;
			  cout << Division(a, b, c) << endl;
		  }
		  else if (choice == 5) {
			  cout << " Good bye !!!" << endl;
			  cout << " Enter the second number:" << endl;
		  }
	  }
	  system("pause");
	  system("cls");
  }

	system("pause");
	return 0;
}*/



