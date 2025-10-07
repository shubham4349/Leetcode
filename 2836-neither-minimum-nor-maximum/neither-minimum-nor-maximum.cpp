class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        
        int maxm=*max_element(nums.begin(),nums.end());
        int minm=*min_element(nums.begin(),nums.end());
        for(int num:nums){
            if(num!=maxm and num!=minm) return num;
        }
        return -1;
    }
};