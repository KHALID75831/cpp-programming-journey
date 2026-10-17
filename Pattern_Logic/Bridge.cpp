#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int m = n-1;

    for(int o = 1; o<=(2*n)-1; o++){
        cout<<"*";
    }
    cout<<endl;

    for(int i = 1; i<=m; i++){
        for(int j = 1; j<=m-i+1; j++){
            cout<<"*";
        }
        for(int j = 1; j<=(2*i)-1; j++){
            cout<<" ";
        }
        for(int k = 1; k<=m-i+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

/*
***********
***** *****
****   ****
***     ***
**       **
*         *
*/