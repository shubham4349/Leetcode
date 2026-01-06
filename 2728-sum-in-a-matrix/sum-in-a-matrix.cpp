class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
       int r=nums.size();
       int c=nums[0].size();
       for(int i=0; i<r;i++){
          sort(nums[i].begin(),nums[i].end(),greater<int>()); //nlogn*r
       }
        int ans=0;
        for(int j=0; j<c; j++){ // col
            int maxm=INT_MIN;
            for(int i=0; i<r; i++){ // r
               maxm=max(maxm,nums[i][j]);
            }
            ans+=maxm;
        }
        return ans;
    }
};