#include <iostream>
using namespace std;

class Simple
{
    int data;

public:
    Simple &getData(int newData = 10)
    {
        // Assign the newData parameter to the data member
        this->data = newData;

        // Return a reference to the current object
        return *this;  // withput the return also it is running in some systems
    }

    void printData()
    {
        cout << "Data: " << data << endl;
    }
};

int main()
{
    Simple obj;
    obj.getData(100); // Call getData to set data to 100
    obj.printData();  // Print the data
}


/*
#include <iostream>
using namespace std;

class Simple
{
    int data;

public:
    void getData(int newData = 10)
    {
        // Assign the newData parameter to the data member
        this->data = newData;

        // No return statement
    }

    void printData()
    {
        cout << "Data: " << data << endl;
    }
};

int main()
{
    Simple obj;
    obj.getData(100); // Call getData to set data to 100
    obj.printData();  // Print the data
}


*/