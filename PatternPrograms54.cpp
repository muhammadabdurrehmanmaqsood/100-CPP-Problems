#include <iostream>
using namespace std;

//PatternPrograms69
int main() {
    int n=5;
    
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            cout<<char(j+65)<<" ";
        }
        cout<<endl;
    }
    return 0;
}