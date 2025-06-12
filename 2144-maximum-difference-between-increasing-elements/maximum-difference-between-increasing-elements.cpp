class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int n=nums.size();
        int maxdiff= INT_MIN;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++) {
                if(nums[j]>nums[i]){
               maxdiff = max(maxdiff, nums[j]-nums[i]);    
                } 
            }
        }
        if(maxdiff==INT_MIN) return -1;
        return maxdiff;
    }
};