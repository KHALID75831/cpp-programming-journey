#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter Number of students: ";
    cin>>n;
    int mark[n];

    for(int i = 0; i<n; i++){
        cout<<"Marks for student number "<<i+1<<": ";
        cin>>mark[i];
    }
    cout<<endl;
    cout<<"Marks That are below 35 are: "<<endl;
    for(int i = 0; i<n; i++){
        if(mark[i]<35) cout<<"Roll NUmber "<<i+1<<": "<<mark[i]<<endl;;
    }


    return 0;
}