#include <iostream>
#include<vector>
using namespace std;
void mytarget(vector<int> arr, int target){
     for(int i = 0; i<arr.size(); i++){
         //better to use a size array 
         //firstly i was using the n and defining the n , but size can i use directly.
        if (arr[i]==target){
            cout<<arr[i]<<" ";
        }
    }
}
int main() {
        int target = 9;
       vector<int> arr = {1, 2, 3, 49, 9}; 
    mytarget(arr, target);
    
   
    return 0;
}


//outout
// index at 4 Getting with the target of 9
