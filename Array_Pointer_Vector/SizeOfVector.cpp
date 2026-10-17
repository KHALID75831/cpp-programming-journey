#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec;      // SIZE function shows the number of elements present in the vector
    vec.push_back(9);
    cout<<vec.size()<<endl;
    vec.push_back(5);
    cout<<vec.size()<<endl;
    vec.push_back(12);
    cout<<vec.size()<<endl;
    vec.push_back(55);
    cout<<vec.size()<<endl;
    vec.push_back(300);
    cout<<vec.size()<<endl;

    

    return 0;
}