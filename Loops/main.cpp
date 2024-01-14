#include<iostream>
#include<conio.h>
using namespace std;



#define Escape 27
//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE
//#define FACTORIAL
//#define TABL_YMNOGENIE
#define TABL_PYTHAGORAS

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0; 
	int n;
	cout << "Введите колво итераций -> "; cin >> n;
	while (i < n)
	{
		
		cout << ++i << " Hello" << endl;
		
	}
#endif 

#ifdef WHILE_2
	int n;
	cout << "Введите колво итераций ->"; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
#endif

#ifdef DO_WHILE
	char key;
	do
	{
		key = _getch();
		// функция _getch() обьявлена в библеотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
#endif

#ifdef FACTORIAL
	int n;
	long long a = 1;
	cout << "Введите колво итераций: "; cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		
		a *= i;
		
	}
	cout << a << endl;
#endif

#ifdef TABL_YMNOGENIE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
				
		}
		cout << endl;
	}
#endif

#ifdef TABL_PYTHAGORAS
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			
			cout << j * i << "\t";
		}
		 
		cout << endl;
	}
#endif





}