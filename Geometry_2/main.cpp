#include<iostream>
using namespace std;

#define SQUARE
//#define TRINGLE_1
//#define TRINGLE_2
//#define TRINGLE_3
//#define TRINGLE_4
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRINGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRINGLE_2

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}

		cout << endl;

	}

#endif // TRINGLE_2

#ifdef TRINGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
#endif // TRINGLE_3

#ifdef TRINGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if ((i + j) % 2 == 0) cout << "+ ";
			else cout << "- ";*/

			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ ": cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif

}