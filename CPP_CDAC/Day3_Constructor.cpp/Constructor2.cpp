
#include <iostream>
using namespace std;

class Test
{
    string name;
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
    string objStr;
    obj.print();

    objStr = "test string...";
    cout << objStr << endl;
}
