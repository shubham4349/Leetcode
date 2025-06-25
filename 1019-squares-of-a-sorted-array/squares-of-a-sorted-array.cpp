class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            nums[i]= abs(nums[i]);
        }
        sort(begin(nums), end(nums));

        vector<int> ans(n,0);
        for(int i=0; i<n; i++){
            ans[i]=nums[i]*nums[i];
        }
        return ans;
    }
};