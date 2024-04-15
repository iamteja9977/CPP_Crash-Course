#include <iostream>
using namespace std;

int main()
{
    char ch;
    // using get() inside cin object
    while (cin.get(ch))
    {
        cout << ch;
    }
    // here white space is allowed
    // if i enter "thiru pathi" also printed
}