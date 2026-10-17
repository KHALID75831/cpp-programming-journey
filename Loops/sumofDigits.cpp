
  // Steps for this code: Inside the Loop
  // step 1: Do (% 10) of the given input. It will give the last digit.
  // step 2: Creat a variale to sum the last digit and give the assignment for summition.
  // step 3: n = n/10; It will decrease the digit number 1 by 1


#include<iostream>
using namespace std;
int main(){

    int n; 
    cout<<"Enter a Number: ";
    cin>>n;

    int ld;
    int sum = 0;

    while(n != 0){
        ld = n%10;
        sum+=ld;
        n = n/10;
    }
     cout<< sum <<endl;

    return 0;
}