class Solution {
public:
    int findMaxK(vector<int>& nums) {
       
        set<int> s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        reverse(nums.begin(),nums.end());
        for(int num:nums){

            if(num>0 and s.find(-num)!=s.end()) return num;
        }
        return -1;
    }
};