#include <iostream>
using namespace std;

int main() {
    int n=5;
    int k,l;

    for(int i=1; i<=n; i++){
        k=i;
        l=n-i+1;
        for(int j=1; j<=n; j++){
            if(j%2==0){
                cout<<k<<" ";
            }
            else{
                cout<<l<<" ";
            }
            k=k+n;
            l=l+n;
        }
        cout<<endl;
    }
    return 0;
}