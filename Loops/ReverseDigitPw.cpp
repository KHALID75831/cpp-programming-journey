#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int ld;
    int r =0;

    while(n != 0){
        r *= 10;
        ld = n%10;
        r += ld;
        n /= 10;
    }
     cout<< r <<endl;

    return 0;
}

 /*
  int ld; 
    while(n != 0){
        ld = n%10;
        cout<<ld;
        n /= 10;
    }
     cout<<endl;
 */