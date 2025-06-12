#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main() {
    setlocale(LC_ALL, "");
    int a[100];
    int n, i;
    cout << "¬ведите целое число дл€ перевода его в двоичную систему: ";
    cin >> n;
    for (i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "¬веденное число в двоичной системе: ";
    for (i = i - 1; i >= 0; i--) {
        cout << a[i];
    }
}