#include <iostream>
using namespace std;

//PatternPrograms95
int main() {
    int n=5;
    
    for(int i=1; i<=n; i++){
        for(int j=n-1; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}