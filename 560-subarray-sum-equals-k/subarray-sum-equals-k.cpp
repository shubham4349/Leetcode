class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        int subarr_cnt=0;
        for(int i =0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                   sum +=nums[j];
                   if(sum==k) subarr_cnt++;
            }
        }
        return subarr_cnt;
        
    }
};