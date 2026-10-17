#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter The Size of Array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] < min) min = arr[i];
    }
    cout<<"The minimum value of the array is : ";
    cout<<min<<endl;
    
    return 0;
}