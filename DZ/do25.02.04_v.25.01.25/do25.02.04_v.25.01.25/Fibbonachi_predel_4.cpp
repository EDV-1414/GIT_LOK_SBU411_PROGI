#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите предел: "; cin >> n;

	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
}