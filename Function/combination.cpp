#include<iostream>
using namespace std;
int main(){

    int n,r;
    cout<<"Enter 1st Num: ";
    cin>>n;
    cout<<"Enter 2nd Num: ";
    cin>>r;

    int nfact = 1;
    for(int i = 2; i<=n; i++){
        nfact *= i;
    }
    int rfact = 1;
    for(int i = 2; i<=r; i++){
        rfact *= i;
    }
    int nrfact = 1;
    for(int i = 2; i<=n-r; i++){
        nrfact *= i;
    }
    int ncr = nfact/(rfact*nrfact);
    cout<<"nCr is: "<<ncr<<endl;

    return 0;
}