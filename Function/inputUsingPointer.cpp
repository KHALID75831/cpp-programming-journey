#include<iostream>
using namespace std;
int main(){

    int x, y;
    int *p = &x;
    int *q = &y;
    cout<<"Enter 1st Number: ";
    //cin>>*p;
    cin>>x;
    cout<<"Enter 2nd Number: ";
    //cin>>*q;
    cin>>y;

    cout<<*p<<" "<<*q<<endl;
    //cout<<x<<" "<<y<<endl;

    return 0;
}