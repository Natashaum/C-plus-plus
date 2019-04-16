#include <iostream>
#include <string>
using namespace std;
/*struct Person {
	string name;
	unsigned int age : 8;  // unsigned - для того щоб число не було від'ємним // age : 8  (виділяємо лише 8 біт, щоб не займало більше ніж нам потрібно пам'яті в програмі);
};
int main() {
	Person Bill;
	Bill.name = "Bill";
	Bill.age = 256;
	cout << "Name:   " << Bill.name << "\nAge:   " << Bill.age << endl;  // якщо не в структурі, то треба писати Bill.name і т.д.*/
//====================================================================================================================================
//====================================================================================================================================

// Створити структуру з бітовими полями Час(години.хвилини, секунди).Продумати яка мінімальна кількість біт потрібна для збереження певного  елемента структури.
// Визначити функції :заповнення об’єкта структури з клавіатури
// вивід  об’єкта структури  на екран
struct Time {
	unsigned int hours : 6;
	unsigned int minutes : 7;
	unsigned int seconds : 7;
};

int main(){
	int minute = 0;
	int hour = 0;
	int second = 0;
	cout << " Enter hours:     " ;
	cin >> hour;
	cout << " Enter minutes:   " ;
	cin >> minute;
	cout << " Enter seconds:   " ;
	cin >> second;
	Time Bit;
	Bit.hours = hour;
	Bit.minutes = minute;
	Bit.seconds = second;

	cout << "Hours:      " << Bit.hours << "\nMinutes:    " << Bit.minutes << "\nSeconds:    " << Bit.seconds << endl;


	system("pause");
	return 0;
}