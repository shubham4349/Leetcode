class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         // it's simply asking equibriluim idx/ pivot idx
        int n=nums.size();
         int totalsum =accumulate(nums.begin(), nums.end(), 0);

        int leftsum=0;
         for(int i =0; i<n; i++){

            int rightsum = totalsum-leftsum-nums[i];

            if(leftsum==rightsum) return i;
            leftsum+=nums[i];
         }
         return -1;
    }
};