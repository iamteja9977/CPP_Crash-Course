#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    try
    {
        if (size < 0)
            throw size;

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
    catch (int sz)
    {
        cout << "Size cannot be " << sz << endl;
    }
}