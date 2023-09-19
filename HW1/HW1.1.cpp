#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    float r,S,h;
    cout << "Введите радиус:\n";
    cin >> r;
    cout << "Площадь круга:\n";
    S = 3.14 * (r*r);
    cout << S<<"\n";
    cout << "Длина окружности:\n";
    S =2* 3.14 *r;
    cout << S<<"\n";
    cout << "Диаметр окружности:\n";
    S = 2 *  r;
    cout << S;

}