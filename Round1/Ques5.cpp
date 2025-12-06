// Q5. Print All 0’s and 1’s Separately
//  Given an array containing 0s and 1s, print all the 0s first and then all the 1s.

#include <iostream>
#include <vector>
using namespace std;
//we willl simply use the count technique because its easy to use and sort all the 0 and 1 separalety i can also use xor ,sort , pointer method
void sort0and1(vector<int>& arr) {
    int zeroCount = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            zeroCount++;
        }
      
    }
    for (int i = 0; i < arr.size(); i++) {
        if (i < zeroCount) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }
}
int main() {
    vector<int> num = {1, 0, 0, 0, 1};

    sort0and1(num);

    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << " ";
    }

    return 0;
}


// Output
// 0 0 0 1 1 
