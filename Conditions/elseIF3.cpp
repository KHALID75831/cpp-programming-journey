#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter marks: ";
cin>>n;

if(n>=91){
    cout<<"Execellent"<<endl;
}
else if(n>=81){
    cout<<"Very Good"<<endl;
}
else if(n>=71){
    cout<<"Good"<<endl;
}
else if(n>=61){
    cout<<"Can do better"<<endl;
}
else if(n>=51){
    cout<<"Average"<<endl;
}
else if(n>=41){
    cout<<"Below Average"<<endl;
}
else{
    cout<<"Fail"<<endl;
}

    return 0;
}