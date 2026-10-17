#include<iostream>
using namespace std;
void find_digit(int n, int *ptr1, int *ptr2){
    *ptr2 = n%10;
    while(n>9){
        n = n/10;
    }
    *ptr1 = n;
    
}
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int first_num, last_num;

    int *ptr1 = &first_num;
    int *ptr2 = &last_num;

    find_digit(n, ptr1, ptr2);
    cout<<first_num<<" "<<last_num<<endl;

    return 0;
}


/*
#include<iostream>
using namespace std;
void digit(int n, int *ptr1, int *ptr2){
    *ptr2 = n%10;
    while(n>9){
        n/= 10;
    }
    *ptr1 = n;
    return;
}
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int first_number, last_number;
    int *ptr1 = &first_number;
    int *ptr2 = &last_number;
    digit(n, ptr1, ptr2);
    cout<<first_number<<" "<<last_number<<endl;

    return 0;
}
*/