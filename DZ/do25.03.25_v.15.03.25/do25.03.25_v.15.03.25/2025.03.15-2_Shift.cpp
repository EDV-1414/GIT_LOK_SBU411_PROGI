#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
    setlocale(LC_ALL, "");
    const int size = 10;
    int arr[size];
    int sdvig, i;
    for (i = 0;i < size;i++)
    {
        arr[i] = i;
        cout << "i= " << i << "\t";
        cout << "arr[i] первоначально = " << arr[i] << "\n";
    }

    cout << "Введите количество сдвигов - целое число <=10:";
    cin >> sdvig;
    int* massiv_obr = new int[sdvig];
    for (int i = 0; i < sdvig; i++)
    {
        massiv_obr[i] = i;
        cout << "i= " << i << "\t";
        cout << "massiv_obr[i]= " << massiv_obr[i] << "\n";
    }
    for (int i = 0; i < size - sdvig; i++)
    {
       cout << "i= " << i << "\t";
       arr[i] = arr[i + sdvig]; // при сдвиге 2 - 8 членов
       cout << "при сдвиге 2 -> i<size-sdvig+1 -> arr[i] = " << arr[i] << "\n";
    }
    for (int j = 0; j < sdvig; j++)
    {
        arr[size - sdvig + j] = massiv_obr[j];
    }
   for (i = 0;i < size;i++)
   {
            cout << "i= " << i << "\t";
            cout << "arr[i] окончательно= " << arr[i] << "\n";
   }
 cout << endl;
}