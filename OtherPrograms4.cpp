#include <iostream>
using namespace std;

// Factorial (using function)
long int factorial(int num){
    if(num<=1){
        return(1);
    }
    else{
        num=num*factorial(num-1);
        return(num);
    }
}
int main() {
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;
}