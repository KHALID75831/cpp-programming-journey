#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter a number: ";
cin>>n;

/*
if((n%5==0 || n%3==0) && n%15!=0)
{
    cout<<"Matching the Condition"<<endl;
}
else
{
    cout<<"Not matching the Condition"<<endl;
}
*/
if(n%5==0 || n%3==0)
{
    if(n%15!=0)
    {
        cout<<"Mtches conditions"<<endl;
    }
    else
    {
        cout<<"Not matching Conditions"<<endl;
    }
}
else
{
    cout<<"Not matching Conditions"<<endl;
}

    return 0;
}