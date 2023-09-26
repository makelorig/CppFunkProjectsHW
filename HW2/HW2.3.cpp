#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 0, i=0, f, y=0;
    while (i < 7)
    {
        cout << "Напишите циферку, надо всего 7: " << "\n";
        cin >> f;
        if (a > f)
        {
            a = f;
        }
        if (y < f)
        {
            y = f;
        }
        i = i + 1;
    }
    cout << "Ваша меньшая циферка: " << a << "\t" << "Ваша большая циферка: " << y;
}
