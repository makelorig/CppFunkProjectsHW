#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int i = 0, b = 0;
    float a;
    while (i < 3)
    {
        cout << "Зарплата за месяц 1:\n";
        cin >> a;
        b = b + a;
        i = i + 1;
        cout << "Зарплата за месяц 2:\n";
        cin >> a;
        b = b + a;
        i = i + 1;
        cout << "Зарплата за месяц 3:\n";
        cin >> a;
        b = b + a;
        i = i + 1;
    }
    cout << "Зарплата за квартал:\n" << b;
}