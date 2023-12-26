#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    //ZADANIE !
    int maxlist1=INT_MIN;
    int z1list[4] = {};
    for (int i = 0; i < 4; i++) {
        z1list[i] = rand() % 11;
        if (maxlist1 < z1list[i])maxlist1 = z1list[i];
    }
    cout <<"Наиб из 4 чисел: " << maxlist1;
    //ZADANIE @
    cout << endl;
    int a, b, n;
    cout << "Введите диапазоны: " << endl;
    cin >> a >> b;
    if(a>b)swap(a,b);
    cout << "Введите число: " << endl;
    cin >> n;
    for (int i = a; i < b;i++) {
        if (n > 0) {
            cout << i;
            n--;
      }
    }
    //ZADANIE #
    cout << endl<<"Введите число для прохожения до него: "<<endl;
    int maxz3=0;
    cin >> maxz3;
    while (true) {
        if (maxz3 > 0) {
            for (float i = 0; i < maxz3; i += 0.25) {
                cout << i << " ";
            }
            break;
        }
        else {
            cout << "Неправильно, попробуй еще раз." << endl;
        }
    }
    //ZADANIE $
    cout << endl;
    int coz4=0;
    float countz4;
    int summ0 = 0;
    cout << "Введите число, если заканчиваем то 0: ";
    cin >> countz4;
    while (countz4 != 0) {
        summ0 += countz4;
        coz4++;
        cout << "Введите число, если заканчиваем то 0: ";
        cin >> countz4;

    }
    cout << summ0/ coz4;
    //ZADANIE %
    cout << endl<<"Проверка на алфавит английский"<<endl;
    char ch5;
    cin >> ch5;
    if ('a' <= ch5 && ch5 <= 'z' || 'A' <= ch5 && ch5 <= 'Z') {
        cout << "Это буква английского алфавита";
    }
    else cout << "Это не буква английского алфавита";
    //ZADANIE ^
    cout << endl;
    const int SIZE10 = 10;
    int massivz6[SIZE10] = { };
    for (int i = 0; i < SIZE10; i++) {
        massivz6[i] = 7 + rand() % (18 + 1 - 7);
        cout << massivz6[i]<< " ";
    }
    //ZADANIE &
    cout << endl;
    int massivz7[SIZE10] = {};
    for (int i = 0,k=0; i < SIZE10; i++) {
        if (massivz6[i] % 2 == 0) massivz7[k++] = massivz6[i];
    }
    //ZADANIE *
    cout << endl<< "Введите сторону квадрата: ";
    int mum, shape = 0;
cin >> mum;
if (mum % 2 == 0) mum++;
shape = round(mum / 2);

for (int i = 0; i < mum; i++) {
    cout << " " << endl;
    for (int j = 0; j < mum; j++) {
        if (i == 0) {
            cout << "*";
        }
        else if (i == mum - 1) {
            cout << "*";
        }
        else if (j == 0 || j == mum - 1) {
            cout << "*";
        }
        else if (i == shape) {
            cout << "*";
        }
        else if (j == shape) {
            cout << "*";
        }
        else {
            cout << " ";
        }
    }
}
    
    //ZADANIE (
    cout << endl<<"Программа по нахождению четных чисел:";
    int massivz9[SIZE10] = { };
    for (int i = 0; i < SIZE10; i++) {
        massivz9[i] = 7 + rand() % (18 + 1 - 7);
        if (massivz6[i] % 2 == 0)
            cout << massivz9[i] << " ";
    }
    
    //ZADANIE )
    cout << endl<< "Массив: ";
    const int SIZE5 = 5;
    const int SIZE4 = 4;
    int min10 = INT_MAX;
    int max10 = INT_MIN;
    int stolb = 0;
    int summ10 = 0;
    int SIZE54 = SIZE5 * SIZE4;
    int array[SIZE5][SIZE4] = {};

    for (int i = 0; i < SIZE5; i++) {
        for (int j = 0; j < SIZE4;j++) {
        array[i][j] = 10 + rand() % (99 + 1 - 10);
        cout << array[i][j]<<" ";
        if (min10 > array[i][j])min10 = array[i][j];
        if (max10 < array[i][j]) {
            max10 = array[i][j];
            stolb=j+ 1;
        }
        summ10 += array[i][j];
        }
    }
    cout << "Наим = " << min10 << " Наиб = " << max10 << " Сумма = " << summ10 << " Столбец с наиб  = " << stolb;
}
