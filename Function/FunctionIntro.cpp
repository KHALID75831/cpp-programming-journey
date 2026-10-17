#include<iostream>
using namespace std;

void starTriangel(int x){
    for(int i = 1; i<=x; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        } 
        cout<<endl;
    }
}

int main(){

    int n,m,l; 
    cout<<"Enter Number of Rows: ";
    cin>>n>>m>>l;
    starTriangel(n);
    starTriangel(m);
    starTriangel(l);
    

    return 0;
}