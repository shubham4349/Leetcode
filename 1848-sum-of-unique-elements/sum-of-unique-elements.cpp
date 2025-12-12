class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int sum=0;
        for(auto &[key,val]:mp){
            if(val==1) sum+=key;
        }
        return sum;
    }
};