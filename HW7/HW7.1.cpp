#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
    int arr[10] = {};
    int min = 11, max = 0;

    for (int i = 0; i < 10; i++) {
        arr[i] = 1 + rand() % 10;
    }

    for (int i = 0; i < 10; i++) {
        if (min >= arr[i])
            min = arr[i];
        if (max <= arr[i])
            max = arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    cout  << "Минимальное число: " << min << ", максимальное число: " << max;
}
