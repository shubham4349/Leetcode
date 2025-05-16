class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
         int n = nums.size();
        
        vector<int> temp(n,-6969);

        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                if(i!=j and nums[i]==nums[j]) {
                    temp[i] = nums[i];
                }
            }
        }
       int ans;

        for(int i=0; i<n; i++){
            if(temp[i]==-6969){
                ans = nums[i];
                return ans;
            }
        }
        return -1;
    }
};