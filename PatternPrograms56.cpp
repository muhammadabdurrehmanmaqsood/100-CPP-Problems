#include <iostream>
using namespace std;

//PatternPrograms71
int main() {
    int n=5;
    
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}