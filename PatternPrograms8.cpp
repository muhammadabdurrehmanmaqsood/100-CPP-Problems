#include <iostream>
using namespace std;

int main() {
    int n=5;
    int k=2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<k<<" ";
            k+=2;
        }
        cout<<endl;
    }
    return 0;
}