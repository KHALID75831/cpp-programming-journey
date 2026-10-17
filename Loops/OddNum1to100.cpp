#include<iostream>
using namespace std;
int main(){

 int i;

//  for(i=1; i<=100; i+=2){
//     cout<< i <<endl;
//}

for(i=1; i<=100; i++){
    if(i%2 == 0) continue;    // Continue means "Skip"
    cout<< i <<endl;
}

    return 0;
}