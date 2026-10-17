#include<iostream>
using namespace std;
int main(){

int a,b;
char c;

cout<<"Enter Problem: ";
cin>>a>>c>>b;

switch(c == '+'){
    case 1:
    cout<< a+b <<endl;
    break;
}
switch( c == '-'){
    case 1:
    cout<< a-b <<endl;
    break;
}
switch( c == '*'){
    case 1:
    cout<< a*b <<endl;
}
switch( c == '/'){
    case 1:
    cout<< a/b <<endl;
}

    return 0;
}