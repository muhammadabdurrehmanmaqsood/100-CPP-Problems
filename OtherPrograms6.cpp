#include <iostream>
using namespace std;

// Largest & Smallest Among n digit
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter "<< n << " elements of array:";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<n; i++){
    smallest = min(array[i], smallest);
    largest = max(array[i], largest);      
    }
    cout<<"Largest is: "<<largest<<endl;
    cout<<"Smallets is: "<<smallest<<endl;
    return 0;
}