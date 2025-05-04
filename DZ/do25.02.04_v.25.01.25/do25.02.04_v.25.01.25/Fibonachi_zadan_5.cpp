#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	int x0 = 0, x1 = 1, x2 = 1, x, n;
	cout << "Задайте сколько нужно вывести чисел Фибоначчи n: ";	cin >> n;
	cout << "x0\t" << 0 << "\n";
	cout << "x1\t" << 1 << "\n";
	cout << "x2\t" << 1 << "\n";
	for (int i = 3; i < n; i++)
	{
		x = x1 + x2;
		cout << "x" << i << "\t" << x << "\n";
		x1 = x2;
		x2 = x;
	}
}
