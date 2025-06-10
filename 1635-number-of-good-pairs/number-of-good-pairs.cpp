class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;
        unordered_map<int,int> count;
        
        for(int i =0; i<n; i++){
           ans+=count[nums[i]]++;
        }
        return ans;
    }
};