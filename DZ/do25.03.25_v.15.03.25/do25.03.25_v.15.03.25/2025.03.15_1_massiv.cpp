#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
    setlocale(LC_ALL, "");
    const int size = 5;
    int summm = 0;
    int numbers[size];
   
    std::cout << "Введите " << size << " целых чисел:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }
    cout << "Вывод в прямом порядке " << "\n";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << "\t";
        summm = summm + numbers[i];
    }
    cout << "" << "\n";
    cout << "Вывод в обратном порядке " << "\n";
    cout << endl;
    for (int i = size-1; i >= 0; --i) {
        cout << numbers[i] << "\t";
    }
    cout << endl;
    cout << "" << "\n";
    cout << "Сумма элементов массива= " << summm <<"\n";
    cout << endl;
    cout << "" << "\n";
    cout << "Среднее арифметическое элементов массива= " << summm/size << "\n";
    cout << endl;

    int max = numbers[0], min= numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) max = numbers[i];
        if (numbers[i] < min) min = numbers[i];
    }
    cout << "" << "\n";
    cout << "Максимальный элемент массива= " << max << "\n";
    cout << endl;
    cout << "" << "\n";
    cout << "Минимальный элемент массива= " << min << "\n";
    cout << endl;
 }