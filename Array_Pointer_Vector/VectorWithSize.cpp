#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec(5);  //Initial size = 5
    vector<int> vec(5, 7);  //Initial size = 5 and each element is 7.
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec[0]<<endl;
    vec[0] = 10;
    cout<<vec[0]<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    

    return 0;
}