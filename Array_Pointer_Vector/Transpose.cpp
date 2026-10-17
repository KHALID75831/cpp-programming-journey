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
    
    cout<<"The Transpose of the following matrix is: "<<endl;

    for(int i = 0; i<c; i++){
        for(int j = 0; j<r; j++){
            cout<<arr[j][i]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}