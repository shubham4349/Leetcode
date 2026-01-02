class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int> mp;
        for(int num:nums){
            mp[num]++;
            if(mp[num]==n) return num;
        }
        return -1;
    }
};