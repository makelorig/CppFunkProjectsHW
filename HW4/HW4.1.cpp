#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
//Ввод вывод данных :
	//Запросите у пользователя его имя и выведите его на экран.
	string a99;
	cout << "Введите своё имя: ";
	cin >> a99;
	cout << "\n" << a99;
	cout << "\n";
	//Попросите пользователя ввести два числа и выведите их сумму.
	int a98, a97;
	cout << "Введите два числа: ";
	cin >>a98 >> a97;
	cout << "Ваша сумма чисел: " << a98 + a97;
	cout << "\n";
	//Попросите пользователя ввести радиус круга и выведите его площадь.
	int a96;
	cout << "Введите радиус круга: ";
	cin >> a96;
	cout << "Ваш радиус: " <<((a96*a96)*3.14);
	cout << "\n";
//Арифметические операторы :
	//Напишите программу, которая считает и выведет площадь прямоугольника с заданными длиной и шириной.
	int a95, a94;
	cout << "Введите длину и ширину: ";
	cin >> a95 >> a94;
	cout << a95*a94<<"\n";
	//Реализуйте калькулятор, который будет выполнять базовые арифметические операции(сложение, вычитание, умножение, деление) с двумя числами, введенными пользователем.
	int a0, b0;
	cout << "Введите a: ";
	cin >> a0;
	cout<<"\n" << "Введите b: ";
	cin >> b0;
	cout << "\n" << a0 << "+" << b0 << "=" << a0 + b0;
	cout << "\n" << a0 << "-" << b0 << "=" << a0 - b0;
	cout << "\n" << a0 << "/" << b0 << "=" << a0 / b0;
	cout << "\n" << a0 << "*" << b0 << "=" << a0 * b0;
	cout << "\n";
	//Пользователь вводит произвольное 3-значное число, напишите программу, которая отделит все его цифры.
	int a93;
	cout << "Введите 3-значное число: \n";
	cin >> a93;
	a93 = (a93 / 100) + ((a93 % 10) / 10) + a93 % 10;
	cout << a93;
	cout << "\n";
//Условие :

	//Напишите программу, которая определит, является ли число, введенное пользователем, четным или нечетным.
	int a92;
	cout << "Введите число для проверки на чётность: "<<"\n";
	cin >> a92;
	if (a92 % 2 == 0)
		cout << "Число чётное";
	else
		cout << "Число не чётное";
	cout << "\n";
	
	//Создайте программу, которая определит, является ли год, введенный пользователем, високосным или нет.
	int a91;
	cout << "Введите год для определения его високосности: ";
	cin >> a91;
	if (a91 % 4 == 0) {
		cout << "\n" << "Год високосный";
	}
	else
		cout << "\n" << "Год не високосный";
	cout << "\n";
//Множественные условия :

	//Напишите программу, которая определит, к какой из четырех времен года относится введенный месяц.
	int a90;
	cout << "Введите ваш месяц для причесления к вреени года";
	cin >> a90;
	if (a90 >= 1 && a90 <= 2) {
		cout << "Ваше время года - Зима";
	}
	else if (a90 >= 3 && a90 <= 5) {
		cout << "Ваше время года - Весна";
	}
	else if (a90 >= 6 && a90 <= 8) {
		cout << "Ваше время года - Лето";
	}
	else if (a90 >= 9 && a90 <= 11) {
		cout << "Ваше время года - Осень";
	}
	else if (a90 == 12) {
		cout << "Ваше время года - Зима";
	}
	cout << "\n";
	//Разработайте калькулятор, который будет определять тип треугольника(равносторонний, равнобедренный, разносторонний) на основе введенных длин его сторон.
	int a89, a88, a87;
	cin >> a89 >> a88 >> a87;
	if (a89 == a88 && a88 == a87)
		cout << "Треугольник равносторонний";
	else if (a89==a88||a88==a87||a87==a89)
		cout << "Треугольник равнобедренный";
	else
		cout << "Треугольник разносторонний";
	cout << "\n";
	//Создайте программу, которая будет классифицировать введенный возраст пользователя в одну из категорий(ребенок, подросток, взрослый) с учетом возрастных границ.
	int a86;
	cin >> a86;
	if (a86 <= 10 && a86 >= 0)
		cout << "Человек по возрасту - Ребенок";
	else if (a86 < 18 && a86 > 10)
		cout << "Человек по возрасту - Ребенок";
	else if (a86 >= 18)
		cout << "Человек по возрасту - Ребенок";
	else
		cout << "Возраст некоректен";
	cout << "\n";
//Тернарный оператор :

	//Напишите программу, которая определит, является ли введенное число положительным или отрицательным с использованием тернарного оператора.
	int a85;
	cin >> a85;
	cout << (a85 <= 0) ? "Число - положительное" : "Число - отрицательное";
	cout << "\n";
	//Разработайте калькулятор, который будет определять, какая из двух введенных пользователем чисел больше, используя тернарный оператор.
	int a84, a83;
	cin >> a84 >> a83;
	cout << (a84 > a83) ? "1-e число Больше" : "2-e число Больше";
	cout << "\n";
	//Создайте программу, которая будет выводить сообщение о статусе пользователя(администратор или обычный пользователь) на основе введенного им логина с использованием тернарного оператора.
	cout << "\n";
//Switch case:

	//Напишите программу, которая будет принимать номер месяца и выводить наименование месяца с использованием оператора switch case.
	
	cout << "\n";
	//Разработайте программу, которая будет определять день недели по его номеру(1 - Понедельник, 2 - Вторник, и т.д.) с помощью оператора switch case.
	
	cout << "\n";
	//Создайте меню выбора операции калькулятора(сложение, вычитание, умножение, деление) с использованием оператора switch case, чтобы выполнить выбранную операцию.

	cout << "\n";


}
