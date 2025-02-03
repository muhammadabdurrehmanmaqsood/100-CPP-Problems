#include <iostream>
using namespace std;

// Number is Even or Odd
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0){
        cout<<"The given number is Even.\n";
    }
    else{
        cout<<"The given numberm is Odd.\n";
    }
    return 0;
}