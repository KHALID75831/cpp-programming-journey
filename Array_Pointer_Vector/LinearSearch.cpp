#include<iostream>
using namespace std;
int main(){

    int n, s;
    cout<<":Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    cout<<"Enter the number you want to search: ";
    cin>>s;

    bool flag = false;

    for(int i = 0; i<n; i++){
        if(arr[i] == s) flag = true;
    }
    if(flag == true) cout<<"The Number is present."<<endl;
    else cout<<"The Number is not present."<<endl;

    return 0;
}