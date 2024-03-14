#include <iostream>
#include <string>
#include <fstream>
#define random(min,max) min+rand()%(max-min+1)
using namespace std;


const char LETTERS[]{ 'A','B','E','K','M','H','O','P','C','T','X' };

const string COLORS[]{ "white","black","yellow","blue","red" };
const string MODELS[]{ "Mercedes","Toyota","BMW","Lexus","Tesla" };



class Car {
private:
	static string lastNumber;
	string number;
	string model;
	string color;
public:

	Car() {};

	Car(string model, string color) {
		lastNumber = generateNumber();
		this->number = lastNumber;
		this->model = model;
		this->color = color;

		if (lastNumber != "EKH")
			lastNumber = generateNumber();
	}
	string getNumber() {
		return number;
	}
	static string getLastNumber() {
		return lastNumber;
	}
	void carInfo() {
		cout << "Car number: " << number << ", model: " << model << ", color: " << color << endl;
	}
	string getModel() {
		return model;
	}
	string getColor() {
		return color;
	}
	void setColor(string color) {
		this->color = color;
	}
private:
	string generateNumber() {
		string letters = "";
		letters += lastNumber[0];
		letters += lastNumber[4];
		letters += lastNumber[5];
		int number = stoi(lastNumber.substr(1, 3));
		if (number >= 999) {
			number = 0;
			if (letters[2] == 'X') {
				letters[2] = LETTERS[0];
				if (letters[2] == 'X') {
					letters[2] = LETTERS[0];
					if (letters[0] == 'X') {
						return "EKH";
					}
					else letters[0] = findNextLetter(letters[0]);

				}
				else letters[1] = findNextLetter(letters[1]);
			}
			else letters[2] = findNextLetter(letters[2]);
		}
		else number++;

		int count = 1;
		if (number < 100 && number>9) count = 2;
		else if (number < 1000 && number>99) count = 3;

		string newNumber = "";
		newNumber += letters[0];
		for (int i = 0; i < 3-count; i++)
		{
			newNumber += '0';
		}
		newNumber += to_string(number);
		newNumber += letters[1];
		newNumber += letters[2];

		return newNumber;
	};

	char findNextLetter(char currentLetter) {
		for (int i = 0; i < 11; i++)
		{
			if (LETTERS[i] == currentLetter) {
				return LETTERS[i + 1];
			}
		}
	}
};
string Car::lastNumber = "A000AA";

int main() {
		setlocale(LC_ALL, "Russian");
		srand(time(NULL));

		Car cars[100];
		for (int i = 0; i < 100; i++)
		{
			cars[i] = Car(MODELS[random(0, 4)], COLORS[random(0, 4)]);
		}
		for (int i = 0; i < 100; i++)
		{
			cars[i].carInfo();
		}
}
