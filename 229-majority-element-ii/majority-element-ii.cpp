class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int limit= n/3;

        unordered_map<int,int> count;

        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(count[nums[i]]>limit) ans.push_back(nums[i]);
        }
        set<int> hello(ans.begin(), ans.end());
        ans.assign(hello.begin(), hello.end());
        return ans;
    }
};