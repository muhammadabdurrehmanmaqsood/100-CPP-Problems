#include <iostream>
using namespace std;

//PatternPrograms66
int main() {
    int n=5;
    char i,j;
    for(int i='A'; i<='E'; i++){
        for(int j='A'; j<=i; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}