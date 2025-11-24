class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
         vector<bool> ans;
         int n=nums.size();
         int curr=0;
         for(int i=0; i<n; i++){
            curr=(curr*2+nums[i])%5;
            if(curr==0) ans.push_back(true);
            else ans.push_back(false);
            // 101-> 5
            // 1011- 5*2+1(curr bit jo add kroge)=11
            // if(curr%5==0) ans.push_back(true);
            // else ans.push_back(false);
         }
         return ans;
    }
};