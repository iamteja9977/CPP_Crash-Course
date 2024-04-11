#include <iostream>
using namespace std;

// classic example of exception handling:

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    try
    {
        if (size < 0)
            throw size;

        int *arr = new int[size]; // memory allocation
        for (int i= 0; i< size; i++)
        {
            arr[i] = 101 + i;
        }
        cout << "arr: ";

        for (int i= 0; i< size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;// memory de-allocation
    }
    catch (int sz)
    {
        cout << "Size cannot be " << sz << endl;
    }
}
