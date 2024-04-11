#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age :" << endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "ur 12 yrs old" << endl;
        break;
    case 18:
        cout << "ur 18 yrs old" << endl;
        break;
    default:
        cout << "your neither 12 nor 18 yrs old" <<endl;
        break;
    }
}