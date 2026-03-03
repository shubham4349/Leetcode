class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int> mp;
        for(int num:nums) mp[num]++;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                     if(mp[nums[j]]!=mp[nums[i]]){
                        return {nums[i],nums[j]};
                     }
            }
        }
        return {-1,-1};
        
        
    }
};