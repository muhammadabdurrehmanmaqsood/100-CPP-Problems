#include <iostream>
using namespace std;

//PatternPrograms62
int main() {
    int n=6;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<(j%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}