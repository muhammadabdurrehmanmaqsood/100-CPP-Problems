#include <iostream>
using namespace std;

//PatternPrograms135
int main() {
    int n=5;
    
    for(int i=n; i>=1; i--){
        for(int j=n; j>=i; j--){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<" "<<k;
        }
        cout<<endl;
    }
    return 0;
}