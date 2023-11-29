#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];

    /*Создание массива*/
    int a = 1, b = 9;
    for (int i = 0; i < 10; i++) {
        int r = a + rand() % (b + 1 - a);
        arr[i] = r;
        cout << arr[i] << " ";
    }
    /*Сортировка "Пузырьком"*/

    for (int i = 0, flag; i < SIZE; i++) {
        flag = false;
        for (int j = 0; j < SIZE - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;}
        }
        if (!flag)break;
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    /*Сортровка "Вставками"*/

    for (int i = 0; i < 10; i++) {
        int r = a + rand() % (b+1-a);
        arr[i] = r;
        cout << arr[i] << " ";
    }
    bool flag = false;
    for (int i = 0; i < SIZE-1; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j-1]) {
                swap(arr[j] , arr[j-1]);}
            else {
                break;}
        }
        
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    /*Сортировка "Шейкером"*/
    cout << endl;
    for (int i = 0, k = SIZE - 1, flag; i < k; i++) {
        flag = true;
        for (int j = i; j < k; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        k--;
        for (int j = k; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                flag = false;
            }
        }
        if (flag)break;
    }


}
