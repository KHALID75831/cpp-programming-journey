#include<iostream>
using namespace std;
int main(){

int i,n;
cout<<"N: ";
cin>>n;

for(i=1; i <= 2*n-1; i+=2){
    cout<< i <<endl;
}

    return 0;
}
//1 3 5 7 9 11 13 ... ... n terms
//pattern = 2n-1 