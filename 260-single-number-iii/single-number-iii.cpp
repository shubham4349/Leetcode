class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       
    unordered_map<int,int> mp;

    for(int i =0; i<nums.size(); i++){
        mp[nums[i]]++;
    }
    vector<int> ans;
     for(int i =0; i<nums.size(); i++){
        if(mp[nums[i]]==1) ans.push_back(nums[i]);
    }

    return ans;

    }
};