#include <iostream>
using namespace std;

int main() {
    int n=5,x;

    for(int i=n-1; i>=0; i--){
        x=i;
        for(int j=0; j<n; j++){
            x+=n;
            cout<<char(x-n+65)<<" ";
        }
        cout<<endl;
    }
    return 0;
}