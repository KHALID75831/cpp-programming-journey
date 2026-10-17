#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        if(n%i == 0){
            cout<< n <<" is a Composite."<<endl;  
            break; // My name is Khalid Hossain Khan  
        }
    } 
    
    return 0;
}