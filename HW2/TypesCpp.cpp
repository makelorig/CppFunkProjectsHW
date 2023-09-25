#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int p, a, a1, a2, a3, a4, a5, g;
    while (true) {
        cout << "Введите 6-значное число:\n";
        cin >> p;
        if (p < 100000) {
            cout << "Число " << p << " не удолетворяет условию" << "\n";
        }
        else if (p >= 1000000) {
            cout << "Число " << p << " не удолетворяет условию" << "\n";
        }
        else {
            a = p / 100000;
            a1 = (p / 10000) % 10;
            a2 = (p / 1000) % 10;
            a3 = (p / 100) % 10;
            a4 = (p % 100) / 10;
            a5 = (p % 10);
            p = a + a1 + a2;
            g = a3 + a4 + a5;
            if (p == g) {
                cout << "\n" << "Ваше число счастливое!!!";
            }
            else {
                cout << "\n" << "Ваше число увы не счастливое(((";
            }
            break;
        }
    }
}