// 1 1 2 3 5 8 13 21 34 55 89 ... ... ... n
// STEPS :
// i) int a = 1, b = 1, sum = 0;
// ii) sum = a+b;
// iii) a = b;
// iv) b = sum;

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int a = 1, b = 1, sum = 0;

    for(int i = 1; i <= n-2; i++){
        sum = a + b;
        a = b;
        b = sum;
    }
        cout<< b <<endl;

    return 0;
}