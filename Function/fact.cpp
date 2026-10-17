
// Printing Factorial With Functions


#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i = 1; i<=n; i++){
        f *= i;
    }
    return f;
}

int main(){

    int n; 
    cout<<"Enter a Number: ";
    cin>>n;
    
    for(int i = 1; i<=n; i++){
        cout<<fact(i)<<endl;
    }

    // int fact = 1;
    // for(int i = 1; i<=n; i++){
    //     fact *= i;
    //     cout<<fact<<endl;
    // }

    return 0;
}