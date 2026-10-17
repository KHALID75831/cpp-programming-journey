#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"Enter a Character: ";
cin>> ch;

int x = (int)ch;

if(x>=65 && x<=90)
{
    cout<<"It is a capital Aphabet"<<endl;
}
if(x>=97 && x<=122)
{
    cout<<"It is a small Alphabet"<<endl;
}
if((x<65 || x>90) && (x<97 || x>122))
{
    cout<<"Not an Alphabet!"<<endl;
}

    return 0;
}