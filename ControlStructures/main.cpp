#include<iostream>
using namespace std;
// Это код который игнорируется компилятором 
// строчный коментрарияй
/* блочный коментарий */
void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello controls"<< endl;

	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	/*if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}*/
	
	
	if (temperature > 60)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко"<< endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "прохоадно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "морозно" << endl;
	}
	else if (temperature > -40)
	{
		cout << "очень холодно" << endl;
	}
	else if (temperature < -40)
	{
		cout << "капец а не погода" << endl;
	}
	

}