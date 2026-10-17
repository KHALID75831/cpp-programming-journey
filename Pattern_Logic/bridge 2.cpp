#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int nsp = n;
    int nst = n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=nst; j++){
            cout<<" ";
        }
        nst--;
        for(int k =1; k<=nsp; k++){
            cout<<"*";
        }
        nsp++;
        cout<<endl;
    }

    return 0;
}