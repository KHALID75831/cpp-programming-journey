#include<iostream>
using namespace std;
int main(){

    int arr1[3][3] = {1,2,3,4,5,6,7,8,9};    
    int arr2[3][3] = {9,8,7,6,5,4,3,2,1};

    cout<<"First Matrix: "<<endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Second Matrix: "<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    int add[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout<<"Addition of the 2 matrices is: "<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<add[i][j]<<"\t";
        }
        cout<<endl;
    }

    
    return 0;
}