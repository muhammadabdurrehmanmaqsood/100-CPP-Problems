#include <iostream>
using namespace std;

int main() {
    int n=5;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            cout<<i+1<<" "<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}