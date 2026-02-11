class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
          vector<int> inc=nums;
          vector<int> dec=nums;

          sort(begin(inc),end(inc));
          sort(begin(dec),end(dec),greater<int>());
          if(nums==inc or nums==dec) return true;
          return false;

    }
};