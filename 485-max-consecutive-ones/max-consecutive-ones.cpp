class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int count=0;
        int maxcount=0;

        while(i<n){
          if(nums[i]==1){
            count++;
            maxcount= max(count,maxcount);
          }
          else count=0;
          
          i++;
        }
        return maxcount;
    }
};