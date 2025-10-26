class Solution {
public: 
    bool isNotPresent(int n,vector<int> nums){
         for(int i=0; i<nums.size(); i++){
              if(n==nums[i]) return false ;
         }
         return true;
    }
    int missingMultiple(vector<int>& nums, int k) {
        // number ka multiple nikalo jo usme present na ho
        int ans=0;
        int i=1;
        while(true){
            if(i%k==0){ // k ka multiple ho
                if(isNotPresent(i,nums)){ // array me na ho
                    ans=i;
                    break;
                }
            }
            i++;
        }
        return ans;
    }
};