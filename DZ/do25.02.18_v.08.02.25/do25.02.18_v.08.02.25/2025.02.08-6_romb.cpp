#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите длину стороны ромба: "; cin >> n;
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			//cout << "* ";
			if (i == (j + n) || j == (i + n))cout << "\\";
			else if (i == (n - j - 1) || (i - n == (n * 2 - j - 1)))cout << "/";
			//else if (i == (n - j - 1) || i == (n * 3 - j - 1))cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
}