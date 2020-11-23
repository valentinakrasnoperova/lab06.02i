#include <iostream>
#include <iomanip>
#include <time.h>
#include "func.h"

using namespace std;


void Create(int* arr, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        arr[i] = Low + rand() % (High - Low + 1);
}

void Print(int* arr, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}



int main() {
    srand((unsigned) time (NULL));
    const int SIZE = 6;
    int arr [SIZE];

    int Low = 10;
    int High = 70;

    Create(arr, SIZE, Low, High);
    Print(arr, SIZE);
    Rep(arr,SIZE);
    Print(arr, SIZE);
    return 0;
}