#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
		cout << endl;
	}
}