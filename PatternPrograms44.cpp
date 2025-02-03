#include <iostream>
using namespace std;

//PatternProgram57
int main() {
    int n=5;
    int n1=0,n2=1,s=n1+n2;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<s<<" ";
            s=n1+n2;
            n1=n2;
            n2=s;
        }
        cout<<endl;
    }
    return 0;
}