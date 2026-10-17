#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    
    int x, y;
    cout<<"Enter 1st Num: ";
    cin>>x,
    cout<<"Enter 2nd Num: ";
    cin>>y;

    cout<<"Before Swaping : x = "<<x<<" y = "<<y<<endl;
    swap(x,y);
    cout<<"After Swaping : x = "<<x<<" y = "<<y<<endl;

    return 0;
}