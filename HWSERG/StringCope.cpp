#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
void addStr(string* &arr,string str,int size) {
	
	string* buf = new string[size + 1];
	for (int i = 0; i < size; i++)
	{
		buf[i] = arr[i];
	}
	buf[size] = str;
	delete[] arr;
	arr = buf;
}

void readFile(string path, string*&stringArray,int &size) {
	ifstream in(path);
	if (in.is_open()) {
		string str;
		while(getline(in,str)){
			addStr(stringArray, str, size++);
		}
	}
	else cout << "Файл не найден";
	in.close();
}

void writeFile(string path, string* arr, int size) {
	ofstream out(path);
	if (out.is_open()) {
		for (int i = 0; i < size; i++)
		{
			out << arr[i]<<endl;
		}
	}
	out.close();
}

string namePlusCopy(string path) {
	string pathCopy = "";
	for (int i = 0; i < path.length(); i++) {
		if (path[i] == '.') {
			pathCopy += "(copy)";
		}
		pathCopy += path[i];
	}
	return pathCopy;
}
void fileCopy(string path) {
	int size = 0;
	string* arrayString = new string[size];
	readFile(path,arrayString,size);
	string pathCopy = namePlusCopy(path);
	writeFile(pathCopy, arrayString, size);
	delete[] arrayString;
}



void fillFileTxt(string path) {
	ofstream out(path, ios::app);
	if (out.is_open()) {
			for (int i = 0; i < 5; i++)
			{
				out << "Kokoriki"<<endl;
			}
	}
	out.close();
}
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string path = "file.txt";//file(copy).txt

	fileCopy(path);


}
