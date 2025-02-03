#include <iostream>
using namespace std;

//Fahrenheit to Celsius
int main() {
    float c, f;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>f;

    c = (f-32)/1.8;
    cout<<"Temperature in Celsius: "<<c<<endl;
    return 0;
}