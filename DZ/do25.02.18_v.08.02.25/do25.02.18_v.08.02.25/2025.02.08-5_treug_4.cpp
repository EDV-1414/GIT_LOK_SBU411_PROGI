#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите длину катета треугольника: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int k = i; k <= n; k++) cout << " ";
		for (int j = 1; j <= i+1; j++) cout << "* ";
		cout << endl;
	}
}