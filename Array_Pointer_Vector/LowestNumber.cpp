#include<iostream>
using namespace std;
int main(){

    int r, c;
    cout<<"Enter row Numbers: ";
    cin>>r;
    cout<<"Enter col Numbers: ";
    cin>>c;
    
    int arr[r][c];

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<"arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }

    cout<<"The Entered Matrix is: "<<endl;

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    // Lowest Number

    int Lowest = arr[0][0];

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(arr[i][j] < Lowest) Lowest = arr[i][j];
        }
    }
    cout<<"The Lowest Number of the Matrix is: ";
    cout<<Lowest<<endl;

    return 0;
}