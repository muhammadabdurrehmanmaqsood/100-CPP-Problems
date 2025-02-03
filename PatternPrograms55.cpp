#include <iostream>
using namespace std;

//PatternPrograms70
int main() {
    int n=5;
    
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}