#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements you want in the array: ";
    cin >> size;

    int numbers[size]; 
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // this loop is to Multiply each element by 5
    for (int i = 0; i < size; i++) {
        numbers[i] = numbers[i] * 5;
    }

    cout << "Updated array after multiplying by 5: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl; 
    return 0;
}

//Output

// Enter the number of elements you want in the array: 5
// Enter 5 numbers: 1 2 3 4 5
// Updated array after multiplying by 5: 5 10 15 20 25 
