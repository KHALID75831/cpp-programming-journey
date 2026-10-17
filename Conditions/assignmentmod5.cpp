#include<iostream>
using namespace std;
int main(){

int x;
cout<<"Enter first number\n";
cin>>x;

int y,m;
cout<<"Enter Second number and value for taking modulus\n";
cin>>y>>m;
int z = ( x*y )% m;
cout<<"Output is: "<<z <<endl;

    return 0;
}  


    //Prediction of output: 0
    // inputs are 2,3 & 6.