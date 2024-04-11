#include <iostream>

#ifndef N
#define N 5
#endif

// using C style structures:

using namespace std;

struct Employees
{
    int id;
    string name;
    double salary;
};

typedef struct Employees record;

void printDetails(record (&ptr)[N], int i);
void acceptDetails(record (&ptr)[N], int i);

int main()
{
    record details[N];
    cout << "Enter employee details (id, firstname, salary)\n";
    for (int i = 0; i < N; i++)
    {
        acceptDetails(details, i);
    }
    cout << "Printing employee details:\n";
    for (int i = 0; i < N; i++)
    {
        printDetails(details, i);
    }
    return 0;
}

void acceptDetails(record (&ptr)[N], int i)
{
    record New;
    cin >> New.id >> New.name >> New.salary;
    ptr[i] = New;
}

void printDetails(record (&ptr)[N], int i)
{
cout <<" ID: " <<ptr[i].id  <<" \t Emp_Name: " << ptr[i].name << "\t Emp_salary: " << ptr[i].salary << "\n";
}