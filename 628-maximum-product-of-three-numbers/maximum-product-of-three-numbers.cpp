class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n =nums.size();

        sort(nums.begin(), nums.end());

        int val=0;
        for(int i =0; i<n; i++){
            if(nums[i]<=0)  val= nums[0]*nums[1]*nums[n-1];
        }

         return max(val,nums[n-1]*nums[n-2]*nums[n-3]);


    }
};