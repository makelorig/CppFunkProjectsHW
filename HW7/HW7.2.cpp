#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
    int arr[10] = {};
    int a1, b1, bup, sum = 0;

    cout << "Диапазончик: "<<endl;
    cin >> a1 >> b1;
    cout << "Значение, которого будет меньше: ";
    cin >> bup;

    if (a1 > b1)swap(a1, b1);

    for (int i = 0; i < 10; i++) {
        arr[i] = a1 + rand() % (b1 + 1 - a1);
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] < bup)
            sum += arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    cout <<  "Сумма: " << sum;

}
