// 1*2*3*4*5*6* ... ... n

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int total = 1;
    for(int i = 1; i<=n ; i++){
        total = total * i;   
    }
     cout<<total<<endl;

    return 0;
}