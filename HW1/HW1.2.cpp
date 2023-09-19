#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int i=0, b=0;
    float r, a;
    while (i < 4)
    {
        cout << "Введите оценку за четверть  1:\n";
        cin >> a;
        b = b + a;
        i = i + 1;
        cout << "Введите оценку за четверть  2:\n";
        cin >> a;
        b = b + a;
        i= i + 1;
        cout << "Введите оценку за четверть  3:\n";
        cin >> a;
        b = b + a;
        i = i + 1;
        cout << "Введите оценку за четверть  4:\n";
        cin >> a;
        b = b + a;
        i = i + 1;
    }
    r = b / 4;
    cout << "Оценка годовая:\n" << round(r);
}
