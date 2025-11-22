#define all(v) (v).begin(),(v).end()
class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        // for exp to be maxm
        // a->maxm
        // b-> secnd max
        // c-> minm
        int n=nums.size();
        sort(all(nums));
        int a=nums[n-1];
        int b=nums[n-2];
        int c=nums[0];
        return a+b-c;

    }
};