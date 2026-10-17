#include<iostream>
using namespace std;
int main(){

float a,b;
char c;

cout<<"Enter problem: ";
cin>>a>>c>>b;

switch(c){
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
}

    return 0;
}