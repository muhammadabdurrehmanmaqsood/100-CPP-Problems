#include <iostream>
using namespace std;

//Count the digit in a number
int main() {
    int n, count=0;
    
    cout<<"Enter a number: ";
    cin>>n;
    
    while(n){
        n=n/10;
        count++;
    }
    cout<<"Total digits: "<<count<<endl;
    return 0;
}