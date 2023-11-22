#include <iostream>
using namespace std;

// я обертання масиву
void reverseArray(int arr[], int start, int end) {
    if (start < end) {
        // Обмін елементів
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Рекурсивний виклик 
        reverseArray(arr, start + 1, end - 1);
    }
}

//  виведення масиву на екран
void printArray(int arr[], int size, int i = 0) {
    if (i < size) {
        cout << arr[i] << " ";
        printArray(arr, size, i + 1);
    }
}
// заповнення масиву послідовністю чисел
void fillArray(int arr[], int size, int i = 0) {
    if (i < size) {
        arr[i] = i + 1;
        fillArray(arr, size, i + 1);
    }
}


int main() {
    const int size = 9;
    int arr[size];

    // Заповнення  виведення оригінального масиву
    fillArray(arr, size);
    cout << "Original array: ";
    printArray(arr, size);

    // Обертання масиву
    reverseArray(arr, 0, size - 1);
    cout << "\nReversed array: ";
    printArray(arr, size);

    return 0;
}
