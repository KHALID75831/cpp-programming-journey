#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 1; i<=x; i++){
        f *= i;
    }
    return f;
}

/*
int combination(int x, int y){
    int ncr = fact(x)/(fact(y)*fact(x-y));
    return ncr;
}
*/

int nCr(int x, int y, int z){
    int cr = x/(y*z);
    return cr;
}
int nCp(int x, int y){
    int cp = x/y;
    return cp;
}

int main(){

    int n, r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);

    cout<<"NCR = "<<nCr(nfact, rfact, nrfact)<<endl;
    cout<<"NCP = "<<nCp(nfact, nrfact)<<endl;

    return 0;
}