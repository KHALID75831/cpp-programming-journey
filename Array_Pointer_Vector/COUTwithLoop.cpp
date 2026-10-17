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
    vec.push_back(5);
    vec.push_back(12);
    vec.push_back(55);
    vec.push_back(300);

    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl<<endl;

    print(vec, vec.size());

    

    return 0;
}