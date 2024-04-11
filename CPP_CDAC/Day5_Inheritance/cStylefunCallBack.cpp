#include <iostream>
using namespace std;

void fun();
void funOne();

int main()
{
    // Declare a function pointer 'fPtr' which can point to functions taking no arguments and returning void
    void (*fPtr)();

    // Assign the address of function 'fun' to the function pointer 'fPtr'
    fPtr = fun;

    // Call the function 'fun' using the function pointer 'fPtr'
    fPtr();

    // Assign the address of function 'funOne' to the function pointer 'fPtr'
    fPtr = funOne;

    // Call the function 'funOne' using the function pointer 'fPtr'
    fPtr();
}

void fun()
{
    cout << "fun() called" << endl;
}

void funOne()
{
    cout << "funOne() called" << endl;
}