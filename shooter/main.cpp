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
			cout << key << " - ������"<< endl;
			break;
		case S:
			cout << key << " - �����"<< endl;
			break;
		case D:
			cout << key << " - ������"<< endl;
			break;
		case A:
			cout << key << " - �����"<< endl;
			break;
		case Space:
			cout << "Space - ������" << endl;
			break;
		case Enter:
			cout << "Enter - �����" << endl;
			break;
		default:
			cout << "����"<<endl;
		}


	} while (key != Escape);
}