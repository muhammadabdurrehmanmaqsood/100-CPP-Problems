#include <iostream>
using namespace std;

//PatternPrograms116
int main() {
    int n=5;
    
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<" ";
        }
        for(int k=i; k<=n; k++){
            cout<<char(i+64);
        }
        cout<<endl;
    }
    return 0;
}