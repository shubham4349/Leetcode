class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int n = nums.size();

        int singlesum = 0;
        for(int i =0; i<n; i++){
            if(nums[i]<10) singlesum +=nums[i];
        }
        
        int doublesum = 0;
        for(int i =0; i<n; i++){
            if(nums[i]>=10) doublesum +=nums[i];
        }
         if(singlesum>doublesum or doublesum> singlesum) return true;

         return false; // yani singlesum==doublesum

    }
};