#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int r,c;

    for(r = 1; r<=n; r++){
        for(c = 1; c<=n; c++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}