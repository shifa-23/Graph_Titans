 // Q1. Print an Array
 // Write a program that takes an array as input and prints all its elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    //it's imporatnt to first take the size of the array so we can run a loop.

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    cout << "Output of the array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}
//output
//Enter the number of elements in the array: 3
//Enter the elements of the array: 1 2 3
//Output of the array: 1 2 3 
