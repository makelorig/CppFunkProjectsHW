#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int p, a,a1,a2, a3;
    while (true) {
        cout << "Введите 4-значное число:\n";
        cin >> p;
        if (p < 1000) {
            cout << "Число " << p << " не удолетворяет условию" << "\n";
        }
        else if (p >= 10000) {
            cout << "Число " << p << " не удолетворяет условию" << "\n";
        }
        else {
            a = p / 1000;
            a1 = (p / 100) % 10;
            a2 = (p / 10) % 10;
            a3 = p % 10;
            p = (a1 * 1000) + (a * 100) + (a3 * 10) + a2;
            cout <<"Число которое вышло - " << p;
            break;
        }
    }
}