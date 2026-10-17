#include<iostream>
using namespace std;
void display(int a[], int size){
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
}
void change(int b[], int size){
    b[2] = 100;
}
int main(){

    int arr[] = {60,10,12,53,76,78,90};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size); // Original
    change(arr, size);
    cout<<endl;
    display(arr, size); //After change
    
    return 0;
}