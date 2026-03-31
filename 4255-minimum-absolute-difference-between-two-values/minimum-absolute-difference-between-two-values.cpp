class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int minDiff=INT_MAX;
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(nums[i]==1 and nums[j]==2){
                    minDiff=min(minDiff,abs(i-j));
                }
            }
        }
        return (minDiff==INT_MAX ? -1:minDiff);
    }
};