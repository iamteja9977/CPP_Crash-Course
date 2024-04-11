#include <iostream>
using namespace std;

class Test
{
    char name[30];
    int len;

public:
    void acceptTest()
    {
        cout << "Enter name and len: ";
        cin >> name >> len;
    }
    void print()
    {
        cout << "Name: " << name << "\tLen: " << len << endl;
    }
};

int main()
{
    Test obj;
    obj.acceptTest();
    obj.print();
}
