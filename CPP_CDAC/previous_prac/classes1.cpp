#include<iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;
    void printDetails()
    {
        cout << " classes1:- The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }
};
int main(){
Employee har;
    har.name = "harry";
    har.salary = 100;
        har.printDetails();

    return 0;
}