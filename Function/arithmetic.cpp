#include<iostream>
using namespace std;
int main(){

    int x = 5;
    int *ptr = &x;
    (*ptr)++;
    //cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;

    return 0;
}