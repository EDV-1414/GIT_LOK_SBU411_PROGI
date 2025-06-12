#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main() {
    setlocale(LC_ALL, "");
    int chislo, i;
    cout << "Введите целое число для перевода его в шестнадцатеричную систему: ";
    cin >> chislo;
    string B[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
    string answr = "";
    int A[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    int num2,ne0;
    int ssc[8];
    ne0 = 0;
    for (int i = 0; i < 8; i++)
    {
        num2 = chislo / 16; 
        ssc[i] = chislo - (num2 * 16); 
        cout << "i= " << i << "\t";
        if (ssc[i] != 0 || num2 != 0)  ne0 = ne0 + 1; // считаю только заполненные
        chislo = num2;
    }
    cout << "ne0= " << ne0 << "\n";
    int* ssc_obr = new int[ne0];
    for (int i = 0; i < ne0; i++)
    {
        ssc_obr[i] = ssc[ne0 - i - 1];
        cout << "i= " << i << "\t";
        cout << "ssc_obr[i]= " << ssc_obr[i] << "\t";
    }
    for (int j = 0; j < ne0; j++)
    {
        for (int k = 0; k < 16; k++)
        {
            if (ssc_obr[j] == A[k])
                answr += B[k];
        }
    }
    cout << "Введенное число в шестнадцатеричной системе: " << answr;
}