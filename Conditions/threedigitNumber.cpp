#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Give Number: ";
cin>>n;

if(n >= 100 && n <= 999)
{
    cout<<"It is a Three digit Number"<<endl; 
}
if(n <= -100 && n >= -999)
{
    cout<<"It is a Three digit Number"<<endl;
}
else
{
    cout<<"Not a Three digit Number"<<endl;
}

    return 0;
}