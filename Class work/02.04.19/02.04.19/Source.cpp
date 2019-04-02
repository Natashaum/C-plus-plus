/*#include <iostream>
#define days 365
#define space "\t"
#define sum(a,b)((a)+(b))   //пишемо без пробілів
#define debug  // Якщо закоментувати, то не буде видно строк, які ми вставляємо в  (#ifdef debug)   (#endif)

using namespace std;

int main() {

	cout << days << endl;
	cout << "some text" << space << "some text" << endl;
	cout << sum(5,10) << endl;

#ifdef debug
	cout << "start loop" << endl;
#endif

	for (int i = 0; i < 3; i++) {
		cout << i << endl;
	}

#ifdef debug
	cout << "End loop" << endl;
#endif 
	system("pause");
	return 0;
}*/

//#include <iostream>
////#define debug
//using namespace std;
//
//int main() {
//
//#ifdef debug
//	cout << "Start loop" << endl; 
//#else
//	cout << "Loop not started" << endl; // 
//#endif
//	
//	system("pause");
//	return 0;
//}

/*#include <iostream>
//#define debug
using namespace std;

int main() {

#ifndef debug  // якщо ifndef -  то працює cout << "Start loop" << endl; навіть з закоментованим //#define debug
	cout << "Start loop" << endl; 
#else
	cout << "Loop not started" << endl; // 
#endif
	
	system("pause");
	return 0;
}*/

/*#include <iostream>
//#define debug
#define Prod  20
using namespace std;

int main() {

#if Prod > 40
	cout << "Prod > 40" << endl;
#elif  Prod > 10 
	cout << "Prod > 10" << endl;
#else
	cout << "Error" << endl;
#endif

	system("pause");
	return 0;
}*/

///////   UNION   ////////

/*#include <iostream>
using namespace std;
union Test{  // union - об'єднання, щоб з економити пам'ять
short a; 
int b;
double c;
};
int main() {
	Test un;
	un.a = 48;
	un.b = 122;
	un.c = 491;

	system("pause");
	return 0;
}*/

// Написати макрос(макро - функцію), який знаходить та повертає максимальне з трьох переданих йому чисел

#include <iostream>
#define Max(a,b,c)((a)<(b)?(b):(a) && (a)<(c)?(c):(a) || (b)<(a)?(a):(b) && (b)<(c)?(b):(c) || (c)<(a)?(a):(c) && (c)<(b)?(b):(c))

using namespace std;

int main() {
	cout << Max(25, 36, 47) << endl;
	system("pause");
	return 0;
}