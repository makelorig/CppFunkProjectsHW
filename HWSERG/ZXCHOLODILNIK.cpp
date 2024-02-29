#include <iostream>
#include <string>
using namespace std;
//clck.ru/397esk

struct Product {
	string name;
	float volume;
	int* date;
};

struct Fridge
{
	string name = "Brusa";
	float volumeCapacity;
	float volume;
	int size;
};

int* parseDate(string date) {
	int* dateArr = new int[3];
	string datecopy;
	int j = 0;
	for (int i = 0, k = 0; i < date.length(); i++) {
		if (date[i] == '.') {
			dateArr[j++] = stoi(datecopy);
			datecopy = "";
			k = 0;
			continue;
		}
		datecopy += date[i];
	}
	dateArr[j++] = stoi(datecopy);
	datecopy = "";
	if (dateArr[0] > 31
		|| dateArr[1] > 12
		|| dateArr[2] > 9999)return nullptr;
	return dateArr;

}
 
Product* productCreate(string name , float volume,string date) {
	int* arrDate=parseDate(date);
	if (arrDate == nullptr)return nullptr;
	Product* product = new Product;
	product->name = name;
	product->volume = volume;
	product->date = arrDate;
	return product;
}

Fridge* createFridge(float volumeCapacity, string name = "Brusa") {
	Fridge* fridge = new Fridge();
	fridge->name = name;
	fridge->volumeCapacity = volumeCapacity;
	return fridge;
}

void productsInfo(Product* product) {
	cout << "Name: " << product->name << " Volume: " << product->volume << " Date: " << product->date;
}

void Udaleniepredmetaizholodilnikasvirusamiplatno() {
	int* udalitpredmetizholodilnika = new int;
}

void Dobavleniepredmetavholodilnikbezregistraciiisms() {
	int* dobavitpredmetvholodilbik = new int;

}
int main()
{
	Product* pr1 = productCreate("Eagle", 12, "20.04.1889");
	Product* pr2 = productCreate("Airplane", 12, "11.09.2001");
	Product* pr3 = productCreate("Saddam Hussein", 12, "28.06.2021");
	productsInfo(pr1);
}
