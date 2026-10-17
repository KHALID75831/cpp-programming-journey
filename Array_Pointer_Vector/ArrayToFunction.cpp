#include<iostream>
using namespace std;
void display(int a[], int size){ // int *a
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
}
void change(int b[]){ //int *b
    b[2] = 100;
}
int main(){

    int arr[5] = {5,10,12,53,76};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(&arr[0], size); // Original
    change(arr);
    cout<<endl;
    display(arr, size); //After change
    
    return 0;
}