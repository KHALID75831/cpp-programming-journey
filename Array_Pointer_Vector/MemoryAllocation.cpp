#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};
    
    cout<<arr[0]<<" : "<<&arr[0]<<endl;  //0x16bc0b140
    cout<<arr[1]<<" : "<<&arr[1]<<endl;  //0x16bc0b144
    cout<<arr[2]<<" : "<<&arr[2]<<endl;  //0x16bc0b148
    cout<<arr[3]<<" : "<<&arr[3]<<endl;  //0x16bc0b14c
    cout<<arr[4]<<" : "<<&arr[4]<<endl;  //0x16bc0b150
    cout<<endl;
    cout<<"If we type &arr then it will give us the memory adress of 0th INDEX "<<endl;
    cout<<&arr<<endl;

    return 0;
}