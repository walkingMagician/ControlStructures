#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int n;	// определяет размер 1 клетки так и всей доски 
	cout << "Введите размер фигуры: ";	cin >> n;

	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << (i / n & 1 ^ j / n & 1 ? "  " : "* ");
			//cout << (i / n % 2 == j / n % 2? "* " : "  ");
		}
		cout << endl;
	}
	/*
	----------------------
		~	NOT
		|	OR
		&	AND
			XOR
	-----------------------
	~=	NOT Assing
	|=	OR Assing
	&=	AND Assing
		XOR Assing
	<<=
	>>=
	*/
}