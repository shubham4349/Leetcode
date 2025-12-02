class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size();
        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[i]=nums[i];
        }
        for(auto &[k,v]:mp){
            if(v==target) ans.push_back(k);
        }
        return ans;
    }
};