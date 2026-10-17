#include<iostream>
using namespace std;

int gcd(int n, int m){
    int hcf = 1;
    for(int i = 1; i<=min(m, n); i++){
        if(n%i == 0 && m%i == 0) hcf = i;
    }
    return hcf;
}

int main(){

    int n, m;
    cout<<"Enter 1st number: ";
    cin>>n;
    cout<<"Enter 2nd number: ";
    cin>>m;

    cout<<gcd(n, m)<<endl;

    return 0;
}