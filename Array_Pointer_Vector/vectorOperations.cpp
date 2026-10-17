#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(6);
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.pop_back();
    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;


    return 0;
}