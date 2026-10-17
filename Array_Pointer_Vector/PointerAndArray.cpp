#include<iostream>
using namespace std;
int main(){

    int arr[] = {60,10,12,53,76,78,90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = &arr[0];
    //int *ptr = &arr ----> wrong
    //int *ptr = &arr[0] ----> right
    cout<<ptr<<endl; // addres of the array 
    cout<<&arr[0]<<endl; // addres of the first element
    cout<<*ptr<<endl; // will Print the 1st element
    cout<<ptr[2]<<endl; // will print the 3rd element

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<size; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
     
    *ptr = 100; // ptr[0] = 100; 

    for(int i = 0; i<size; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    cout<<ptr[2]<<endl;
    
    for(int i = 0; i<size; i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    
    return 0;
}