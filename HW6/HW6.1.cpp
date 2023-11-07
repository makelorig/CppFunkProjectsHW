#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, y, uo = 0;
	bool flag;

	cout << "Введите диапазоны: ";
	cin >> x >> y;

	if (x > y)
		swap(x, y);

	for (int i = x; i <= y; i++) {
		flag = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = false;
			}
		}
		if (flag)
			uo++;
	}

	cout << x << " to " << y << " is " << uo;
}
