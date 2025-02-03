#include <iostream>
using namespace std;

//PatternPrograms75
int main() {
    int n=5;
    
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}