#include <iostream>
using namespace std;

// Instructors code for demonstrating dangling pointers:
// points to the memory location that has been de-allocated

class Array
{
    int *arr;
    const int size;

public:
    Array(int = 0);
    Array(int sz, int first);
    ~Array();

    void fillArray(int first);
    void printArray();
};

int main()
{
    Array a = 10;
    a.fillArray(101);
    a.printArray();
    {
        Array b = a;
        b.printArray();
    }

    // object b goes out of scope and deletes everything
    // associated with that memory location its pointing to
    cout << "After deletion..." << endl;
    a.printArray(); // object "a" pointer arr is a dangling pointer

    // Since both object "a" and "b" point at same memory location,
    // whenever one goes out of scope, it deletes everything in that memory
    // and other becomes a dangling pointer.
}

Array::Array(int sz) : size(sz)
{
    arr = new int[size];
}

Array::Array(int sz, int first) : size(sz)
{
    arr = new int[size];
    fillArray(first);
}

Array::~Array()
{
    delete[] arr;
}

void Array::fillArray(int first)
{
    for (int i = 0; i < size; ++i)
        arr[i] = first + i;
}

void Array::printArray()
{
    cout << "Array: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}
