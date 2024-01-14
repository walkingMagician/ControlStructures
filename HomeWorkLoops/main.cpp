#include<iostream>
#include<conio.h>
#include <fstream>
#include <iomanip>
using namespace std;

#define Escape 27
//#define STEPEN
//#define ASCII
//#define FIBONACHI
//#define PRIMENUMBERS
void main()
{
	setlocale(LC_ALL, "");

#ifdef STEPEN
	int chislo, stepenb;
	char key;
	cout << "Возведение в степень"<< endl;
	do {
		
		
		cout << "Пожалуйста введите число" 
			 " которое надо возвести в степень: " << endl; cin >> chislo;
		cout << "Теперь саму степень -> "; cin >> stepenb;
		int a = chislo;
		for (int i = 1; i < stepenb; i++)
		{
			chislo = chislo * a;

		}
		cout <<"результат степени ->" << chislo << endl;
		cout << "желаете выйти нажмите Escape" << endl; 
		cout << "для продолжения нажмите Enter" << endl;
		key = _getch();
		cout << "--------------------------------------------------------"<< endl;
	} while (key != Escape);
#endif

#ifdef ASCII
	int g;
	cout << "Таблица ASCII-символов";
	cout << "на каком символе остановится остановиться? " << endl;
	cout << "Введите число -> "; cin >> g;
	
	for (int i = 0; i <= g; i++)
	{
		cout << i << " - " << (char)i << "    ";
	}
#endif

#ifdef FIBONACHI
	unsigned long long a = 0, b = 1, summ, n;
	cout << "Ряд фибоначи до указанного придела" << endl;
	cout << "пожалуйста введите придел ->"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i == 0) cout << "0 \t";
		if (i == 1) cout << "1 \t";
		a = a + b;								// 
		b = a - b;
		summ = a + b;
		cout << summ << "\t";
	}
#endif

#ifdef PRIMENUMBERS
	int n;
	bool firstFlag = true;
	cout << "Простые числа" << endl;
	cout << "Введите придел: "; cin >> n;
	cout << "Все числа ноходящийся до придела -> ";
	if (n == 2 || n == 3) cout << n;
	// if (n == 3) cout << "2, " + n;
	else 
	{
		for (int i = 2; i <= n; i++)
		{
			bool secondFlag = true;
		for (int j = 2; j < i; j++)		// j создаётся новым
		{
			if (i % j == 0) 
			{
				secondFlag = false;		
				break;
			}
		}
			if (secondFlag == true)
			{
				if (firstFlag == true)
				{
					cout << i;
					firstFlag = false;	
					
				}
				else
				{
					cout << ", " << i;
				}
			}
		}
	}
#endif



}
