#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
    int arr[12] = {};
    int a1, b1, a2 = INT_MAX, b2 = 0;
    for (int i = 0, j; i < 12; i++) {
        cout << "Ввод прибыли за " << i + 1 << " месяц: "<< endl;
        cin >> j;
        arr[i] = j;
    }
    cout << "Диапазон поиска: "<<endl<<"Начальный месяц: ";
    cin >> a1;
    cout << endl << "Конечный месяц: ";
    cin>> b1;
    while (a1 < 1 || a1>12 || b1 < 1 || b1>12) {
        cout << "Input a range: ";
        cin >> a1 >> b1;}
    if (a1 > b1)swap(a1, b1);
    for (int i = a1; i < b1; i++) {
        if (a2 > arr[i])
            a2 = arr[i];
        if (b2 < arr[i])
            b2 = arr[i];
    }

    cout << endl << "Минимальное значение: " << a2 << ", максимум: " << b2;

}
