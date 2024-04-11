#include<iostream>
using namespace std;


int main(){
//  int arr[4]={1,2,3,4};
//  cout<<"show the values at 2 of array :"<<arr[1]<<endl;
//  for(int i=0;i<sizeof(arr[0]); i++){
//     cout<<arr[i]<<endl;
//  }

//1D
    //     int arr[] = {1, 3, 6};
    // // Array Index   0  1  2
    //     // cout<<arr[1];
    //     int marks[6];

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //         cin>>marks[i];
    //     }

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    //     }

//2D
    int arr2d[2][3] = {  {1,2,3},
                         {2,4,6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
        }

    }

}