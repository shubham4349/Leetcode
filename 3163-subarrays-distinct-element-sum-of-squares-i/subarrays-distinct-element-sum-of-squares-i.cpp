class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            set<int> s;
            for(int j=i; j<n; j++){
               if(s.find(nums[j])==s.end()) s.insert(nums[j]);
               ans+=(int)s.size()*s.size();
            }
        }
        return ans;
    }
};