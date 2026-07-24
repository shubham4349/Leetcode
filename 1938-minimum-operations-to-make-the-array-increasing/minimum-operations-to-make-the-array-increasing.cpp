class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
       
        // sort(nums.begin(),nums.end());
         vector<int> copy=nums;
        int ans=0;

        for(int i=0; i<n-1; i++){
           if(nums[i+1]<=nums[i]){
              nums[i+1]=nums[i]+1;
           }
        }
        for(int i=0; i<n; i++){
            ans+=abs(copy[i]-nums[i]);
        }
        return ans;
    }
};