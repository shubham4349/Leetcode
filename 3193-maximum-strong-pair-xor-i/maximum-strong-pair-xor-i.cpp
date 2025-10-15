class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        // strong pari + maxm xor
        int xorr=0; // agar tum ^ sign ke jaagh xor likho to bhi chalega
        int maxm=INT_MIN;
        for(int i=0; i<nums.size(); i++){
             for(int j=i; j<nums.size(); j++){
                   if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
                     xorr = nums[i]^nums[j];
                     maxm=max(maxm,xorr);
                   }
             }
        }
        return maxm; 
    }
};