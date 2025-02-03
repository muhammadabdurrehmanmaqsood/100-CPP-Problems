#include <iostream>
using namespace std;

int main() {
    int n=5,p;

    for(int i=1; i<=n; i++){
        p=i-1;
        for(int j=1; j<=i; j++){
            cout<<(p+i)<<" ";
            p+=2;
        }
        cout<<endl;
    }
    return 0;
}