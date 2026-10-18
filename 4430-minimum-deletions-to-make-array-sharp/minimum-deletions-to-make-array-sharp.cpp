class Solution {
public:
    int minDeletions(vector<int>& nums) {
        // a xor a =0 
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n-1; i++){
           if(nums[i]==nums[i+1]) cnt++;
        }
        return cnt;

    }
};