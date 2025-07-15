class Solution {
public:
    int rob(vector<int>& nums) {
    // Approach 1-> without dp
       int prev1= 0, prev2= 0;
        for(int n : nums) {
        int temp= prev1;
        prev1= max(prev2+n,prev1);
        prev2= temp;
    }
    return prev1;

        
    }
};