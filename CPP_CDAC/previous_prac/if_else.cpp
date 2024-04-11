#include<iostream>
using namespace std;
int main(){
    int age ;
    cout<<"enter your age :"<<endl;
    cin>> age;
    // if(age>18){
    //     cout<<"ur eligible to vote"<<endl;

    // }
    // else{
    //     cout<<"ur not eligible for vote"<<endl;
    // }

    if(age>100 || age <1 ){
        cout<<"invalid"<<endl;

    }
    else if(age >=18){
        cout<<"ur  eligible for vote"<<endl;
    }
    else{
        cout<<"ur  not eligible to vote"<<endl;
    }
return 0;

}