#include <iostream>
using namespace std;

//Swap Two Numbers without third variable
int main() {
    int x,y;
    cout<<"Enter the values of x and y:\n";
    cin>>x>>y;
    cout<<"Before swaping:\n x = "<<x<<"\n y = "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"After swaping:\n x = "<<x<<"\n y = "<<y<<endl;
    return 0;
}