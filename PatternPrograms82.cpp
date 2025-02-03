#include <iostream>
using namespace std;

//PatternPrograms163
int main() {
    int n=5;
    
    for(int i=n; i>=1; i--){
        for(int j=n-1; j>=i; j--){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<"*";
        }
        for(int l=i-1; l>=1; l--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}