#include <iostream>
using namespace std;

//PatternPrograms113
int main() {
    int n=5;
    
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<char(i+65);
        }
        cout<<endl;
    }
    return 0;
}