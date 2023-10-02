#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите своего оператора: \n 1 - МТС \n 2 - Мегафон \n 3 - Теле2 \n\n";
	cin >> a;
	if (a > 0 && a < 4)
	{
		cout << "Введите длительность разговора в минутах: \n";
		cin >> b;
		cout << "Введите на какого оператора звоним: \n 1 - МТС \n 2 - Мегафон \n 3 - Теле2 \n\n";
		cin >> c;
		if (c < 4 && c > 0) {
			switch (a) {
			case 1://МТС
				switch (c) {
				case 1:cout << "Стоимость разговора = " << b * 1 << " рублей";
					break;
				case 2:cout << "Стоимость разговора = " << b * 4 << " рублей";
					break;
				case 3:cout << "Стоимость разговора = " << b * 3 << " рублей";
					break;
				}
				break;
			case 2://Мегафон
				switch (c) {
				case 1:cout << "Стоимость разговора = " << b * 4 << " рублей";
					break;
				case 2:cout << "Стоимость разговора = " << b * 1 << " рублей";
					break;
				case 3:cout << "Стоимость разговора = " << b * 5 << " рублей";
					break;
				}
				break;
			case 3://Теле2
				switch (c) {
				case 1:cout << "Стоимость разговора = " << b * 3 << " рублей";
					break;
				case 2:cout << "Стоимость разговора = " << b * 5 << " рублей";
					break;
				case 3:cout << "Стоимость разговора = " << b * 1 << " рублей";
					break;
				}
				break;
			}
			cout << "\n";
		}
		else
			cout << "Данные не корректны";
	}
	else
		cout << "Данные не корректны";
}
