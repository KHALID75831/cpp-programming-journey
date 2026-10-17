#include<iostream>
using namespace std;
int main(){

    int r, c;
    cout<<"Enter row Numbers: ";
    cin>>r;
    cout<<"Enter col Numbers: ";
    cin>>c;
    int arr1[r][c];    
    int arr2[r][c];
    int add[r][c];

    // Taking Input for 1st Matrix
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<"arr1["<<i<<"]["<<j<<"] = ";
            cin>>arr1[i][j];
        }
    }

    cout<<"First Matrix: "<<endl;

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Taking Input for 1st Matrix
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<"arr2["<<i<<"]["<<j<<"] = ";
            cin>>arr2[i][j];
        }
    }

    cout<<"Second Matrix: "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Doing Addition
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout<<"Addition of the 2 matrices is: "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<add[i][j]<<"\t";
        }
        cout<<endl;
    }

    
    return 0;
}