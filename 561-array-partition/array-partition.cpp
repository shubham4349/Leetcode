class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        // maxm sum ke liye me chahta hu ki minm krne pe max balue mile
        // so agar do jyada value ka min nikaloge to minm bhi jyada hoga
        sort(nums.begin(),nums.end(),greater<int>());
        int sum=0;
        for(int i=0; i<n-1; i+=2){
             sum+=min(nums[i],nums[i+1]);
        }
        return sum;
    }
};