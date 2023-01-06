#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;
    // constructor
    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    void printDetails()
    {
        cout << "classes3:- The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }

    void getSecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword<<endl;
    }

private:
    int secretPassword;
};

//inheritance of c++
class Programmer : public Employee
{
    public:
        int errors;
        
};


int main()
{
    Employee har("harry constructor", 355, 121022);
   
    har.printDetails();
        // cout<<har.secretPassword;
//which is not accessible
    har.getSecretPassword();

    return 0;
}