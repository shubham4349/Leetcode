class Solution {
public:
    int missingNumber(vector<int>& arr) {
         
        int n = arr.size();
        int totalSum = 0;

        for(int i = 0; i<=n; i++){
            totalSum +=i;
        }
          int arrSum = 0;
        for(int i = 0; i<n; i++){
                arrSum +=arr[i];
        }

        return totalSum-arrSum;
        
    }
};