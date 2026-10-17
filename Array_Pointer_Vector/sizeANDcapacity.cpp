#include<iostream>
using namespace std;
int main(){

    cout<<"Without initialization: ";
    vector<int> a;
    cout<<a.size()<<" ";
    cout<<a.capacity()<<endl;

    cout<<"After initialization: ";
    vector<int> v(5); // initialization with size
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;



    cout<<"Initialization with value: "<<endl;
    vector<int> b(5,7);
    for(int i = 0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;
}