class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int maxdiff = 0;
       if(nums.size()>1){
         for(int i =0; i<nums.size()-1; i++){
            int diff = nums[i+1]-nums[i];
            maxdiff = max(maxdiff,diff);

         }
        }else return 0;
       
        return maxdiff;
    }
};