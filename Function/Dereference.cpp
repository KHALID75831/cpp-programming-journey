#include<iostream>
using namespace std;
int main(){

    int x = 20;
    int *p = &x;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<x<<endl; 

    *p = 9;
    cout<<x<<endl;

    return 0;
}