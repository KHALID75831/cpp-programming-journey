#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;

    float c = 1;
    bool flag = true;

    if(b<0){
        flag = false;
        b = -b;
    }

    for(int i = 1; i<=b; i++){
        c = c*a;
    }

    if(flag == false){
        c = 1/c;
        b = -b;
    }
    if(a == 0 && b == 0) cout<<"Not Defined"<<endl;
    else cout<<a<<" is raised to power "<<b<<" is: "<<c<<endl;
     
    return 0;
}