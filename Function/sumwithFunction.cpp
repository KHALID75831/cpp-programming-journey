#include<iostream>
using namespace std;
int sum(int z, int u){
    return z+u;
}
int main(){

    int x, y;
    cout<<"Enter 1st Number: ";
    cin>>x;
    cout<<"Enter 2nd Number: ";
    cin>>y;
    cout<<sum(x,y)<<endl;

    return 0;
}