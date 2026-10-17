#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Type Marks: ";
cin>>n;

if(n>=91)
{
    cout<<"Execellent"<<endl;
}
if(n>=81 && n<=90)
{
    cout<<"Very Good"<<endl;
}
if(n>=71 && n<=80)
{
    cout<<"Good"<<endl;
}
if(n>=61 && n<=70)
{
    cout<<"Can do better"<<endl;
}
if(n>= 51 && n<=60)
{
    cout<<"Averege"<<endl;
}
if(n>=40 && n<= 50)
{
    cout<<"Below average"<<endl;
}
if(n<40)
{
    cout<<"Fail"<<endl;
}

    return 0;
}