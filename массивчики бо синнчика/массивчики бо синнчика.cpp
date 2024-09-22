#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "ENTER SIZE: ";
    cin >> size;

    int* arr1 = new int[size];

    cout << "1: ";
    for (int i = 0; i < size; ++i) {
        arr1[i] = i + 1;  
        cout << arr1[i] << " ";
    }
    cout << endl;

    int* arr2 = new int[size + 1];

    for (int i = 0; i < size; ++i) {
        arr2[i] = arr1[i];
    }

    arr2[size] = 100;

    cout << "2: ";
    for (int i = 0; i < size + 1; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}