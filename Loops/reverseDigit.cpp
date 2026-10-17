#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int ld; 
    while(n != 0){
        ld = n%10;
        cout<<ld;
        n /= 10;
    }
     cout<<endl;
    return 0;
}


//  Take input then print the reverse of the number