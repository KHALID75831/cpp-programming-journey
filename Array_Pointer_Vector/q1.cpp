#include<iostream>
using namespace std;
int main(){

    int n = 9;
    int arr[10] = {1,2,9,4,7,0,6,3,9,5};
    bool found = false;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" is duplicate."<<endl;
                found = true;
                break;
            }
        }
        if(found == true) break;
    }

    if(found != true) cout<<"Every element is unique."<<endl;

    return 0;
}