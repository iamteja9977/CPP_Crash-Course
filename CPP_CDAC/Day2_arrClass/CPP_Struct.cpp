
#include <iostream>

using namespace std;

// C++ style of using structures:

struct Employee
{
    int id;
    string name;
    double salary;

    // functions along with data:

    void printDetails();  // call by value
    void acceptDetails(); // call by reference
};

typedef struct Employee record;

int main()
{
    record details[5];
    cout << "Enter employee details (id firstname salary)\n";
    for (auto i = 0; i < 5; i++)
        details[i].acceptDetails();

    cout << "Printing employee details:\n";
    for (auto i = 0; i < 5; i++)
        details[i].printDetails();
    return 0;
}

void Employee::printDetails()
{

    cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << "\n";
}

void Employee::acceptDetails()
{

    cin >> id >> name >> salary;
}
