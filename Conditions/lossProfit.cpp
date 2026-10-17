#include<iostream>
using namespace std;
int main(){

int c, s;

cout<<"Cost Price: ";
cin>>c;

cout<<"Selling Price: ";
cin>>s;

if(s>c)
{
    cout<<"Profit: ";
    cout<< s - c <<endl;
}
if(s<c)
{
    cout<<"Incurred loss: ";
    cout<< -(s-c) <<endl;
}
if(s==c)
{
    cout<<"No Profit, No Loss!"<<endl; 
}

    return 0;
}