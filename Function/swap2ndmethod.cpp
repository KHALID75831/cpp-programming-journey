#include<iostream>
using namespace std;
int main(){

    int n, m;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Enter a Number: ";
    cin>>m;

    cout<<"Before Swaping: "<<"n = "<<n<<"  "<<"m = "<<m<<endl;

    n = n + m;
    m = n - m;
    n = n - m;

    cout<<"After Swaping: "<<"n = "<<n<<"  "<<"m = "<<m<<endl;

    return 0;
}