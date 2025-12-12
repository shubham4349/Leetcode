class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int> mp;
        for(int num:nums) mp[num]++;
        for(auto &m:mp){
            if(m.second==n) return m.first;
        }
        return 0;
    }
};