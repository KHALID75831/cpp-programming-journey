#include<iostream>
using namespace std;
int main(){

    int x = 5;
    int y = 10;
    int *p = &x;
    int *q = &y;
    cout<< *p + *q<<endl;

    return 0;
}