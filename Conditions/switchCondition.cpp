#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter Number: ";
cin>>n;

// 1   2   3   4   5   6   7   8   9  10  11  12
//31  28  31  30  31  30  31  31  30  31  30  31

// 1-3-5-7-8-10-12 --> 31
// 4-6-9-11 -->30
// 2 -->28

switch((n<=7 && n%2!=0) || (n>=8 && n%2 == 0)){
    case 1:
        cout<<"31"<<endl;
        break;
}
switch((n>2 && n%2 == 0 && n<8) || (n == 9 || n == 11)){
    case 1:
    cout<<"30"<<endl;
    break;
}
switch(n == 2){
    case 1:
    cout<<"28"<<endl;
    break;
}

    return 0;
}



