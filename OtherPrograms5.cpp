#include <iostream>
using namespace std;

// Prime Number (Logic 1)
int main() {
    int n,count=0;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2){
        cout<<n<<" is a Prime number.";
    }
    else{
        cout<<n<<" is NOT a Prime number.";
    }
    return 0;
}