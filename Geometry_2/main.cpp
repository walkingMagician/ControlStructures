#include<iostream>
using namespace std;

//#define SQUARE
//#define TRINGLE_1
//#define TRINGLE_2
//#define TRINGLE_3
//#define TRINGLE_4

#define UP_LEFT_AGNLE	(char)218
#define UP_RAGHT_AGNLE	(char)191
#define LOW_LEFT_AGNLE	(char)192
#define LOW_RAGHT_AGNLE	(char)217
#define WHITE_BOX		(char)219	<< (char)219

#define HORIZONTAL		(char)196	<< (char)196
#define VERTICAL		(char)179	

//#define CHESS_WINDOW
//#define CHESS_PROSTO_CHESS
#define CHESS_TWO_CYCLE

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;

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
			if ((i + j) % 2 == 0) cout << "+ ";
			else cout << "- ";

			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ ": cout << "- ";
			//cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif

	setlocale(LC_ALL, "C");

#ifdef CHESS_WINDOW	
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UP_LEFT_AGNLE;
			else if (i == 0 && j == n) cout << UP_RAGHT_AGNLE;
			else if (i == n && j == 0) cout << LOW_LEFT_AGNLE;
			else if (i == n && j == n) cout << LOW_RAGHT_AGNLE;
			else if (i == 0 || i == n) cout << HORIZONTAL;
			else if (j == 0 || j == n) cout << VERTICAL;
			else if (i % 2 == j % 2) cout << WHITE_BOX;
			else cout << "  ";
		}
		cout << endl;
	}

#endif

#ifdef CHESS_PROSTO_CHESS
	setlocale(LC_ALL, "ru");

	int j;
	cout << "Введите размер внутреннего квадрата: "; cin >> j;

	for (int i = 0; i < n; i++)						// циклы i и v для размера поля (фигуры)
	{
		for (int f = 0; f < j; f++)
		{
			for (int v = 0; v < n; v++)				 // циклы f и h для внутреннего квадрата и его размера
			{
				for (int h = 0; h < j; h++)
				{
					if (i % 2 == v % 2)				// если их остатки равны * 
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
			}
			cout << endl;
		}
	}
#endif

#ifdef CHESS_TWO_CYCLE

	setlocale(LC_ALL, "ru");

	for (int i = 0; i < n * n; i++)	// вертикаль
	{
		for (int f = 0; f < n * n; f++)	// горизонталь 
		{
			if (((f / n) + (i / n)) % 2 == 0 )	// 
				cout << "* ";
			else
				cout << "  ";

		}
		cout << endl;
	}
#endif

}

					