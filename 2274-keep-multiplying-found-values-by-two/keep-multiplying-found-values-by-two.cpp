class Solution {
public:
    bool doesExists(int orig, vector<int> nums){
         sort(nums.begin(),nums.end());
         if(binary_search(nums.begin(),nums.end(),orig)) return true;
         return false;
    }
    int findFinalValue(vector<int>& nums, int original) {
        while(doesExists(original,nums)){
            original=2*original;
        }
        return original;
    }
};