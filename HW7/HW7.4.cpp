#include <iostream>
#include <ctime>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
    int arr[10] = {};
    int min = INT_MAX, max = INT_MIN;
    int nig, pop = 0, sum1 = 0, sum2 = 0, sum12=0;
    int oi = -1, ui;
    cin >> min >> max;
    for (int i = 0; i < 10; i++) {
        arr[i] = (-10) + rand() % (10 + 1 - (-10));}
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
        if (arr[i] < 0)
            if (oi == -1)
                oi = i;
        ui = i;
        sum1 += arr[i];
        if (i % 2 == 0 && pop == 0)
            pop = arr[i];
        if (i % 2 == 0)
            pop *= arr[i];}
    for (int i = oi; i <= ui; i++) {
        sum2 += arr[i];}
    for (int i = min; i <= max; i++) {
        sum12 += arr[i];}
    cout << endl << "Негатив. сумма: " << sum1 << endl<< "Миним., макс. умнож: " << sum12 << endl << "Умнож чет номеров: " << pop << endl << "Меж первым и последним : " << sum2;}
