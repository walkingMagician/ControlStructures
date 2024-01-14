#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define W 119
#define S 115
#define A 97
#define D 100
#define Space 32
#define Enter 13


void main()
{
	setlocale(LC_ALL, "");

	char key;
	do
	{
		key = _getch();
		switch (key)
		{
		case W:
			cout << key << " - Вперед"<< endl;
			break;
		case S:
			cout << key << " - Назад"<< endl;
			break;
		case D:
			cout << key << " - Вправо"<< endl;
			break;
		case A:
			cout << key << " - Влево"<< endl;
			break;
		case Space:
			cout << "Space - Прыжок" << endl;
			break;
		case Enter:
			cout << "Enter - Огонь" << endl;
			break;
		default:
			cout << "мимо"<<endl;
		}


	} while (key != Escape);
}