// Q4. Write a program to find the smallest (min) and largest (max) number in the array.

#include <iostream>
#include <vector>
using namespace std;
//Recursion method
void findMinMax(vector<int>& arr, int index, int& min, int& max) {
    if (index == arr.size())
        return;
    if (arr[index] < min) 
        min = arr[index];

    if (arr[index] > max) 
        max = arr[index];

    //now call the recursion 
    findMinMax(arr, index + 1, min, max);
}

int main() {
    vector<int> arr = {1, 2, 3, 49, 9};

    int min = arr[0];
    int max = arr[0];

    findMinMax(arr, 0, min, max);

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}

//the second method uses max and min basiclly uses stl when we have low in time we use it

void minMax(vector<int> arr) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max<< endl;
}

int main() {
    vector<int> arr = {1, 5, 3, 49, 9};

    minMax(arr);

    return 0;
}

//Output 
// Minimum: 1
// Maximum: 49

