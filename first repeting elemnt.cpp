// // Given an array arr[], find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

// // Note:- The position you return should be according to 1-based indexing. 

// // Examples:

// ?soln
class Solution {
public:
    int firstRepeated(vector<int> &arr) {
        int n = arr.size();

        int minIndex = n;  

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    minIndex = min(minIndex, i);
                    break;
                }
            }
        }

        if (minIndex == n) return -1;
        return minIndex + 1; 
    }
};
