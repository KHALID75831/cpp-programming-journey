#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,2,9,4,7,8,6,3,9,5};
    int n = (sizeof(arr)/sizeof(arr[0])) - 1;

    int sum = 0;
    int s = 0;
    for(int i = 0; i<=n; i++){
        sum += arr[i];
    }

    s = (n*(n+1))/2;

    int r = sum - s;

    cout<<"The repeated element is : "<<r<<endl;

    return 0;
}