#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
	int a, b, c;
    char v;

    cout << "Введите число: ";
    cin >> v;
    switch (v) {
    case '.':
    case ',':
    case '?':
    case '!':
        cout << "Знак препинания.";
    }
    if (0 >= v <= 9)
        cout << "Это цифра";
    else if (v >= 'A' && v <= 'Z' || v >= 'a' && v <= 'z')
        cout << "Это буква";
    else
        cout << "Является другим символом.";
    cout << "\n";
