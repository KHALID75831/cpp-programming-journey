#include<iostream>
#include<vector>
using namespace std;
int main(){

    // If we initialize the size;
   /*
    vector<int> vec(5);
    cout<<"Enter Inputs: ";
    for(int i = 0; i<5; i++){
        cin>>vec[i];
    }
    for(int i = 0; i<5; i++){
        cout<<vec[i]<<" ";
    }
   */

    //without initializing the size;

    vector<int> vec;
    cout<<"Enter Inputs: ";
    for(int i = 0; i<5; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }

    for(int i = 0; i<5; i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}