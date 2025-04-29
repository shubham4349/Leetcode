class Solution {
public:
    int maxSubArray(vector<int>& arr) {
      
      int n = arr.size();

     int currsum = arr[0];
     int maxsum = arr[0];

     for(int i = 1; i<n; i++){
        currsum = max(arr[i], currsum+arr[i]);
        maxsum = max(maxsum, currsum);
     }
     return maxsum;
    }
};
