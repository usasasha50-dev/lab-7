#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент " << i << ": ";
        cin >> arr[i];
    }

    int sumNegative = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sumNegative += arr[i];
        }
    }

    cout << "Сума від'ємних елементів: " << sumNegative << endl;

    delete[] arr;
    return 0;
}