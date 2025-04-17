// maximum sum of subarray

// arr=[1,3,4,-2,7]

// subarrays starting from index i=0
//  1          sum = 1
//  1 3         sum = 4
//  1 3 4
//  1 3 4 -2
//  1 3 4 -2 7   sum = 13

 // subarrays starting from index i=1
//  3
//  3 4
//  3 4 -2
//  3 4 -2 7 

// subarrays starting from index i=2
//  4
//  4 -2
//  4 -2 7 

 // subarrays starting from index i=3
//  -2
//  -2 7 
 
// subarrays starting from index i=4
// 7

// print the maximum sum
// C++ Program to find the maximum subarray sum using nested loops 

#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of subarray with maximum sum
int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];
  
    // Outer loop for starting point of subarray
      for(int i = 0; i < arr.size(); i++) {
        int currSum = 0;
      
        // Inner loop for ending point of subarray
        for(int j = i; j < arr.size(); j++) {
            currSum = currSum + arr[j];
          
            // Update res if currSum is greater than res
            res = max(res, currSum);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr);
    return 0;
}
