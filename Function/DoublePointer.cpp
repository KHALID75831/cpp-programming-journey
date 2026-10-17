#include<iostream>
using namespace std;
int main(){

    int x = 5;
    int *ptr = &x;
    int **p = &ptr;
    int ***q = &p;
    int ****r = &q;

    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    cout<<***q<<endl;
    cout<<****r<<endl;

    return 0;
}