#include <iostream>
using namespace std;

//Factorial of each number between 1 to n
int main() {
    int n, cn;
    long int fact;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of each number between 1 to "<<n<<" is given by: \n"<<"Number : Factorial\n";
    
    for(int i=1; i<=n; i++){
        cn=i;
        fact=1;
        for(int j=1; j<=cn; j++){
            fact=fact*j;
        }
        cout<<cn<<" : "<<fact<<endl;
    }
    return 0;
}