#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    vector<int> vec(size);

    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент " << i << ": ";
        cin >> vec[i];
    }

    int sumNegative = 0;
    for (int i = 0; i < size; i++) {
        if (vec[i] < 0) {
            sumNegative += vec[i];
        }
    }

    cout << "Сума від'ємних елементів: " << sumNegative << endl;

    return 0;
}