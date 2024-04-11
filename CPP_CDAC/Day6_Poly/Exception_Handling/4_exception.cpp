#include <iostream>
using namespace std;

void createNPrintArr(int);

int main()
{
    // Another way to handle exceptions,
    // since the try catch block is inside the function,
    // whenever an exception is thrown,
    // control goes to catch block inside the function
    // and function terminates
    // and in main function, control goes to next line
    // and program continues as usual.

    createNPrintArr(10);  // runs normally
    createNPrintArr(20);  // runs normally
    createNPrintArr(-20); // will throw exception
    createNPrintArr(50);  // this line will not execute
}

void createNPrintArr(int size)
{
    try
    {
        if (size < 0)
            throw size;
        // when exception is thrown,
        // control goes directly to catch block.

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
    catch (int x)
    {
        cout << "size cannot be " << x << endl;
    }
}
