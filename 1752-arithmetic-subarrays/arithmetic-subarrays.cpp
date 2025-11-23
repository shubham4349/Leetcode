class Solution {
public:
    bool patternCheck(vector<int> nums){
         int n=nums.size();
         int commDiff=nums[1]-nums[0];
         for(int i=0; i<n-1; i++){
            if(nums[i+1]-nums[i]!=commDiff) return false;
         }
         return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        // range-> 
        // l[i]-> r[i]
        // sort kr-> dekh koi patern h ki nhi
        // nhi h to false nhi to yes
        vector<bool> ans;
        for(int i=0; i<l.size(); i++){
            int start=l[i];
            int end=r[i];
            vector<int> helper;
            for(int j=start; j<=end; j++){
                 helper.push_back(nums[j]);

            }
            sort(helper.begin(),helper.end());
            bool check=patternCheck(helper);
            ans.push_back(check);
        }
        return ans;
    }
};