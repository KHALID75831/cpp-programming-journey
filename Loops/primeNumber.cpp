  // Take an integer Input and check wether it is a Prime or a Composite Number.
  // Prime numbers starts from 2; So we have to start the loop from i = 2;


  // Using Booleam we can "store"  a state



#include<iostream>
using namespace std;
int main(){

    int i,n;
    cout<<"Enter a Number: ";
    cin>>n;

    bool flag = true; // true means Prime Number

    for(i=2 ; i<= n-1; i++){
        if(n%i ==  0){
            flag = false;
        }
    }
        if(n == 1) cout<< n <<" is nither a Prime nor a Composite Number"<<endl;
        else if(flag == true) cout<< n <<" is a Prime Number"<<endl;
        else cout<< n <<" is a Composite Number"<<endl;

    return 0;
}
