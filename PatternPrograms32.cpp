#include <iostream>
using namespace std;

int main() {
    int n=5,x;

    for(int i=0; i<n; i++){
        x=i;
        for(int j=0; j<n; j++){
            x+=n;
            cout<<char(x-n+65)<<" ";
        }
        cout<<endl;
    }
    return 0;
}