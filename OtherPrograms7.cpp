#include <iostream>
using namespace std;

//Swap Two Numbers
int main() {
    int x,y,temp;
    cout<<"Enter the values of x and y:\n";
    cin>>x>>y;
    cout<<"Before swaping:\n x = "<<x<<"\n y = "<<y<<endl;
    temp = x;
    x = y;
    y = temp;
    cout<<"After swaping:\n x = "<<x<<"\n y = "<<y<<endl;
    return 0;
}