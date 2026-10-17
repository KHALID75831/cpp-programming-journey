// 2 6 18 54 ... ... n terms

#include<iostream>
using namespace std;
int main(){

int i,n;
cout<<"Enter a number: ";
cin>>n;

int a = 2;

for(i=1; i<=n; i++){
    cout<< a <<endl;
    a = a*3;
}

    return 0;
}