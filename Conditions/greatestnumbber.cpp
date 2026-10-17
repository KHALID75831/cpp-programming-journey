#include<iostream>
using namespace std;
int main(){

int a,b,c;
cout<<"Enter 1st number: ";
cin>>a;
cout<<"Enter 2nd number: ";
cin>>b;
cout<<"Enter 3rd number: ";
cin>>c;

if(a>b && a>c)
{
    cout<<"The biggest number is: ";
    cout<< a <<endl;
}
if(b>a && b>c)
{
    cout<<"The biggest number is: ";
    cout<< b <<endl;
}
if(c>a && c>b)
{
    cout<<"The biggest number is: ";
    cout<< c <<endl;
}

    return 0;
}