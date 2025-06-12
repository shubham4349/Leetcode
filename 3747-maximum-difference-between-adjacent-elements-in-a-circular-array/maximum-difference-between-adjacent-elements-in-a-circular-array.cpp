class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        
        int n=nums.size();

        int fl_diff = abs(nums[0]-nums[n-1]); // first-last diff
        int maxdiff= INT_MIN;
        for(int i=0; i<n-1; i++){
           maxdiff = max(maxdiff, abs(nums[i]-nums[i+1]));
        }
        int ans = max(maxdiff, fl_diff);
        return ans;
    }
};