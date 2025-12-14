class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int kl=0; // k largest sum
        int ks=0; // k samllest sum
        int cnter=0;
        for(int i=0; i<n; i++){
            ks+=nums[i];
            kl+=nums[n-1-i];
            cnter++;
            if(cnter==k) break;
        }
        return kl-ks;
    }
};