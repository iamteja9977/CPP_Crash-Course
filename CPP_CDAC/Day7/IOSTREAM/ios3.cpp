#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;
    // creating an object of ifstream
    // it reads from the file passed as argument.
    // therefore in this case output will be this file itself.
    ifstream in("ios3.cpp");
    // ifstream in("testing.txt"); //2
    while (in.get(ch))
    {
        cout << ch;
    }
    // this will print the program code 
    //if we pass any other file then that file content is printed//2
}