#include <iostream>
using namespace std;

//PatternPrograms114
int main() {
    int n=5;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=i; k>=0; k--){
            cout<<char(k+65);
        }
        cout<<endl;
    }
    return 0;
}