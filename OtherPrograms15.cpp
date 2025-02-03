#include <iostream>
using namespace std;

//Celsius to Fahrenheit 
int main() {
    float c, f;
    cout<<"Enter temperature in Celsius: ";
    cin>>c;

    f = (1.8*c) + 32;
    cout<<"Temperature in Fahrenheit: "<<f<<endl;
    return 0;
}