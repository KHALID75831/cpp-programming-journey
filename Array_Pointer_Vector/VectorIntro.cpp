#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec;
    vec.push_back(9);
    vec.push_back(5);
    vec.push_back(12);
    vec.push_back(55);
    vec.push_back(300);

    cout<<"Before: "<<endl<<"\t";
    cout<<vec[0]<<" ";
    cout<<vec[1]<<" ";
    cout<<vec[2]<<" ";
    cout<<vec[3]<<" ";
    cout<<vec[4]<<endl;

    cout<<"After: "<<endl<<"\t";
    vec[0] = 500;

    cout<<vec[0]<<" ";
    cout<<vec[1]<<" ";
    cout<<vec[2]<<" ";
    cout<<vec[3]<<" ";
    cout<<vec[4]<<endl;

    return 0;
}