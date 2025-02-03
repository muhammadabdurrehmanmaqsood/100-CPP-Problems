#include <iostream>
using namespace std;

int main() {
    int n=5;
    int k;

    for(int i=0; i<n; i++){
        k=i+1;
        for(int j=0; j<n; j++){
            cout<<k<<" ";
            k+=n;
        }
        cout<<endl;
    }
    return 0;
}