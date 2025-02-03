#include <iostream>
using namespace std;

//Area of circle
int main() {
    float R, A;
    cout<<"Enter radius of circle: ";
    cin>>R;

    A = 3.14*R*R;
    cout<<"Area of circle of radius "<<R<<" is: "<<A<<endl;
    return 0;
}