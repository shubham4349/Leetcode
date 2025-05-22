class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int minm = *min_element(nums.begin(), nums.end());

        return minm;
    }
};