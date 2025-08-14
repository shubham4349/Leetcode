class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        
        // int sum=accumulate(nums.begin(), nums.end(),0);
        // if(sum==0) return 1;
        // return 0;
        int n=nums.size();
        int sum=0;
        int cnt=0;
        for(int i=0; i<n; i++){
             sum+=nums[i];
             if(sum==0) cnt++;
        }
        return cnt;
    }
};