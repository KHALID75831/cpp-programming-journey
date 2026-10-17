// Print the sum of this series:
// 1-2+3-4+5-6+ ... ... n

// Here we can see, all the even numbers are Subtracting;
// And all the odd numbers are Adding;

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        if(i%2 != 0) sum += i;
        else sum -= i;
    }
    cout<<sum<<endl;

    return 0;
}