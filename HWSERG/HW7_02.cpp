#include <iostream>
#define random(min,max) min+rand()%(max-min+1)
using namespace std;


void fillDoubleArray(int** arr) {
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0, k = 1; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            arr[i][j] = k++;
        }
    }
}
 void showDoubleArray(int** arr) {
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void delByIndex(int** &arr, int index) {
    int size = _msize(arr) / sizeof(arr[0]);
    if (index<0 || index>size - 1) {
        cout << "Неправильный индекс"; return;
    }
    int** arr1 = new int* [size - 1];
    for (int i = 0; i < index; i++){
        arr1[i] = arr[i];
    }
    for (int i = index+1; i < size; i++){
        arr1[i - 1] = arr[i];
    }
    delete[] arr[index];
    delete[] arr;
    arr = arr1;
}
int main()
{
    //srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int row = 5;
    int column = 5;
    int* ary = new int[row]{52,42,89,14,88};

    int** array = new int* [row];

    for (int i = 0; i < row; i++) {
        array[i] = new int[column];
    }

    fillDoubleArray(array);
    showDoubleArray(array);
    cout << endl;
    delByIndex(array, 2);
    showDoubleArray(array);

}

