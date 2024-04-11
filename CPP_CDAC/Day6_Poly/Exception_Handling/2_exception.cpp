
#include <iostream>
using namespace std;

void createNPrintArr(int);

int main()
{
    // When there is no try catch block,
    // the program will terminate immediately.

    createNPrintArr(10);  // runs normally
    createNPrintArr(20);  // runs normally
    createNPrintArr(-20); // will throw exception
    createNPrintArr(50);  // this line will not execute
}

void createNPrintArr(int size)
{
    if (size < 0)
        throw size;
    // when exception is thrown,
    // Program immediately terminates

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 101 + i;
    }
    cout << "arr: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
}
