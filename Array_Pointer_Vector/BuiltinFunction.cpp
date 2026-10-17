#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> vec, int size){
    for(int i = 0; i<size; i++){
        cout<<vec[i]<<" ";
    }
}
int main(){

    vector<int> vec;
    vec.push_back(9);
    cout<<vec.size()<<endl;   // size shows the number of elements
    vec.push_back(5);
    vec.push_back(12);
    cout<<vec.capacity()<<endl; // Capacity 
    vec.push_back(55);
    vec.push_back(300);

    print(vec, vec.size());

    cout<<endl<<endl;

    vec.pop_back();
    vec.pop_back();  //pop_back eliminates the last member

    print(vec, vec.size());

    

    return 0;
}