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
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > max) max = arr[i];
    }

    int second_max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > second_max && arr[i] < max) second_max = arr[i];
    }

    cout<<"The second maximum value of the array is : ";
    cout<<second_max<<endl;
    
    return 0;
}