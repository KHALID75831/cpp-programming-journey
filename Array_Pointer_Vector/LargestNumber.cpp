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
    
    // Largest Number

    int largest = arr[0][0];

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(arr[i][j] > largest) largest = arr[i][j];
        }
    }
    cout<<"The Largest Number of the Matrix is: ";
    cout<<largest<<endl;

    return 0;
}