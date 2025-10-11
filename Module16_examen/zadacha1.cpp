#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//создадим функцию для вычисления суммы четных чисел
int SumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int size;
    cout << "ВВедите размер массива: ";
    cin >> size;
    int arr[size];
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int sum = SumEven(arr, size);
    cout << "Сумма четных чисел в массиве: " << sum << endl;

    return 0;
