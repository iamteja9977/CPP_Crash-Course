#include<iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;
    //constructor
    Employee(string n , int s){
        this->name=n;
        this->salary=s;

    }
    void printDetails()
    {
        cout << " classes2:- The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }
};
int main(){
Employee har("harry constructor", 355);
    // har.name = "harry";
    // har.salary = 100;
        har.printDetails();

    return 0;
}