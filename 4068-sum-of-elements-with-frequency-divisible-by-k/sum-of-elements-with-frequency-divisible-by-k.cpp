class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        
        map<int,int> count;
        for(int num:nums) count[num]++;
        int ans=0;
        for(auto it: count){
            if(it.second%k==0) ans+=it.first*it.second;
        }
        return ans;
    }
};