#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;
}

int main(){
    int a,b;
cout<<"enter the 'a' :"<<endl;
cin>>a;
cout<<"enter the 'b' :"<<endl;
cin>>b;
cout<<"ur sum is :" <<sum(a,b)<<endl;
}