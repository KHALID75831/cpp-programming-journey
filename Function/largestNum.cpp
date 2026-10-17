#include<iostream>
using namespace std;

int maxi(int a, int b){
    int c;
    if(a>b) c = a;
    else c = b;
    return c;
}

int main(){

    int x,y;
    cout<<"Enter 1st Num: ";
    cin>>x;
    cout<<"Enter 2nd Num: ";
    cin>>y;

    //cout<<max(x,y)<<endl;
    cout<<maxi(x,y)<<endl;

    return 0;
}