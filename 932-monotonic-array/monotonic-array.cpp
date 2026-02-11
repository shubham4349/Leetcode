class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        //   vector<int> inc=nums;
        //   vector<int> dec=nums;

        //   sort(begin(inc),end(inc));
        //   sort(begin(dec),end(dec),greater<int>());
        //   if(nums==inc or nums==dec) return true;
        //   return false;

         // method-2
         // assume inc

         int n=nums.size();
         bool inc=true;
         for(int i=0; i<n-1; i++){
              if(nums[i]>nums[i+1]) inc=false;
         }
          bool dec=true;
         for(int i=0; i<n-1; i++){
              if(nums[i]<nums[i+1]) dec=false;
         }
         if(inc==false and dec==false) return false;
         return true;

    }
};