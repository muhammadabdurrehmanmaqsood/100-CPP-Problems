#include <iostream>
using namespace std;

//Power of a given number
int main() {
    int num, power,i=1;
    long int sum=1;
    
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter power: ";
    cin>>power;
    while(i<=power){
        sum=sum*num;
        i++;
    }
    cout<<num<<" to the power "<<power<<" is; "<<sum;
    return 0;
}