#include<iostream>
using namespace std;
int main(){

int day;
cout<<"Give Number: ";
cin>>day;

/*

if(day == 1) cout<<"Monday"<<endl;
if(day == 2) cout<<"Tuesday"<<endl;
if(day == 3) cout<<"Wednesday"<<endl;
if(day == 4) cout<<"Thursday"<<endl;
if(day == 5) cout<<"Friday"<<endl;
if(day == 6) cout<<"Saturday"<<endl;
if(day == 7) cout<<"Sunday"<<endl;

*/

switch(day){
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    case 7:
        cout<<"sunday"<<endl;
        break;

    default:
        cout<<"Invalid Number"<<endl;
        
}

    return 0;
}