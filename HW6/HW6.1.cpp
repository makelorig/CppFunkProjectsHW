#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int a, b, uo = 0;
	bool flag;

	cout << "Введите диапазоны: ";
	cin >> a >> b;

	if (a > b)
		swap(a, b);

	for (int i = a; i <= b; i++) {
		flag = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = false;
			}
		}
		if (flag)
			uo++;
	}

	cout <<"В диапазоне: от "<< a <<" до "<< b << ", простых чисел: " << uo;
}
