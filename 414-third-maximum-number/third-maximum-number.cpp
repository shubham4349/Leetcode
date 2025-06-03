class Solution {
public:
    int thirdMax(vector<int>& nums) {
      int n = nums.size();
    //   unordered_set<int> temp();
    int maxm = *max_element(nums.begin(), nums.end());
    set<int> s(nums.begin(), nums.end());
    nums.assign(s.begin(), s.end());
    if(nums.size()>=3)  return nums[nums.size()-3];
    return maxm;


   
    }
};