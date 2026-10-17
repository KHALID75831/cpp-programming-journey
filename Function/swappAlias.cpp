#include<iostream>
using namespace std;

void swap(int &n, int &m){
    int temp = n;
    n = m;
    m = temp;

}

int main(){

    int n, m;
    cout<<"Enter 1st Number: ";
    cin>>n;
    cout<<"Enter 2nd Number: ";
    cin>>m;
    cout<<"Befor Swaping : "<<endl<<"n = "<<n<<endl<<"m = "<<m<<endl;
    cout<<"After Swaping : "<<endl;
    swap(n,m); 
    cout<<"n = "<<n<<endl<<"m = "<<m<<endl;


    return 0;
}