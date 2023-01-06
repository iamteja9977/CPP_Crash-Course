#include<iostream>
using namespace std;
int main(){
    int a=9;
    int *ptra;
    ptra=&a;
    cout<<"addresss of the 'a' is "<<ptra<<endl;
    cout<<"value at addresss of the 'a' is "<<*ptra<<endl;

}