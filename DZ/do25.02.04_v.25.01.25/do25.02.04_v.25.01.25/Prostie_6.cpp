#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите предельное число: "; cin >> n;

	for (int i = 1; i < n; i++)
	{
		bool simple = true;	//Предположим что число простое, но это нужно проверить:
		for (int j = 2; j <= sqrt(i); j++) // сделала не строго <, иначе 4,9,16,25... попадают как простые
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple) cout << i << "\t";
	}
	cout << endl;
}