#include <iostream>
using namespace std;

//Leap year
int main() {
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if(year%4==0){
        cout<<year<<" is a leap year.";
    }
    else{
        cout<<year<<" is not a leap year.";
    }
    return 0;
}