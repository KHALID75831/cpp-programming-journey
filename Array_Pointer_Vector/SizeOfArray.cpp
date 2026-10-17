#include<iostream> 
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,12,34,54,37,89,32};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;

    return 0;
}