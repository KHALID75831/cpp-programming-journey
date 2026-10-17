#include<iostream>
using namespace std;

int last_Digit(int n){
    n = n%10;
    return n;
}
int first_Digit(int n){
    while(n>9){
        n = n/10;
    }
    if(n == 0) return 0;
    else return n;
}

int main(){

    int n;
    cout<<"Enter Number : ";
    cin>>n;

    /*
    int x = n%10;
    
    while (n>9) { // (n>9) becaus, it will divide the number until last digit.  
        n = n/10;
    }
    cout<<"First Digit is: "<<n<<endl;
    
    cout<<"Lsat Digit is: "<<x<<endl;
    */

    cout<<"First Digit is: "<<first_Digit(n)<<endl;
    cout<<"Last Digit is: "<<last_Digit(n)<<endl;

    return 0;
}