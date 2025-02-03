#include <iostream>
using namespace std;

//Sum of digits of a number
int main() {
    int n, d, sum=0;
    
    cout<<"Enter a number: ";
    cin>>n;
    
    while(n>0){
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    cout<<"Sum of digits of a number: "<<sum<<endl;
    return 0;
}