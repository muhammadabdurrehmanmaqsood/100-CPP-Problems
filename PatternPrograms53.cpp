#include <iostream>
using namespace std;

//PatternPrograms68
int main() {
    int n=5;
    char i,j;
    for(int i='E'; i>='A'; i--){
        for(int j='E'; j>=i; j--){
            cout<<char(i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}