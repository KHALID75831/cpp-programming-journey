#include<iostream>
using namespace std;
int main(){

int i,n;
cout<<"Enter a number: ";
cin>>n;

int a = 1;

for(i = 1; i <= n; i++){
    cout<< a <<endl;
    a = a*2;
}

    return 0;
}