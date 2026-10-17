#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec;      
    vec.push_back(9);
    cout<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<vec.capacity()<<endl;
    vec.push_back(12);
    cout<<vec.capacity()<<endl;
    vec.push_back(55);
    cout<<vec.capacity()<<endl;
    vec.push_back(300);
    cout<<vec.capacity()<<endl;

    

    return 0;
}