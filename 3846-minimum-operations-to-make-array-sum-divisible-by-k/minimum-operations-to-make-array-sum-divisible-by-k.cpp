#define all(v) (v).begin(),(v).end()
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    //   int n=nums.size();
      int sum=accumulate(all(nums),0);
    //   abhi sum S h usme s%k yni rem amount of change kroge then itll be div by k
      return sum%k; 
    }
};