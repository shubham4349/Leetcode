class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        // inc
        while(i<n-1 and nums[i]<nums[i+1]){
            i++;
        } 
        if(i==0 or i==n-1){ // 0-> no inc, n-1-> only inc
            return false;
        }
      //  dec
        int mark=i;
        while(i<n-1 and nums[i]>nums[i+1]) i++;
        if(i==mark or i==n-1) return false;
      // inc
        int mark2=i;
        while(i<n-1 and nums[i]<nums[i+1]) i++;
        if(i==mark2 or i!=n-1) return false;

        return true;
    }
};