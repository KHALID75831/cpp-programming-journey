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
    vec.push_back(9);
    vec.push_back(5);
    vec.push_back(12);
    vec.push_back(55);
    vec.push_back(300);
    vec.push_back(9);
    vec.push_back(5);
    vec.push_back(12);
    vec.push_back(55);
    vec.push_back(300);
    vec.push_back(9);
    vec.push_back(5);

    cout<<"Size is: "<<vec.size()<<endl;
    cout<<"Capacity is: "<<vec.capacity()<<endl;

    vec.pop_back();  //pop_back eliminates the last member
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();  
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();  
    vec.pop_back();
    vec.pop_back();  
    vec.pop_back();
    vec.pop_back();  //11 lines popback

    cout<<"Size is: "<<vec.size()<<endl;
    cout<<"Capacity is: "<<vec.capacity()<<endl;
    

    // So, after pop_back size changes but capacity remains same.
    

    return 0;
}