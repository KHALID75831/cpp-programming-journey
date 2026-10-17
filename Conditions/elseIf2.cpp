#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Give Marks: ";
cin>>n;

if(n>=91)
{
    cout<<"Execellent"<<endl;
}
else{
    if(n>=81)
    {
        cout<<"Very Good"<<endl;
    }
    else{
        if(n>=71)
        {
            cout<<"Good"<<endl;
        }
        else{
            if(n>=61)
            {
                cout<<"Can do Better"<<endl;
            }
            else{
                if(n>=51)
                {
                    cout<<"Average"<<endl;
                }
                else{
                    if(n>=40)
                    {
                        cout<<"Bellow Average"<<endl;
                    }
                    else{
                        cout<<"Fail"<<endl;
                    }
                }
            }
        }
    }
}


    return 0;
}