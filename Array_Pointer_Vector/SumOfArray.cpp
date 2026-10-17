#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Size of array: ";
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];
    }

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    cout<<"The Sum of the Array is : "<<sum<<endl;;

    return 0;
}