class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> ans;
        for(int i =0; i<n; i++){
           
            for(int j =0; j<n; j++){
                int count = 0;
                if(i!=j and nums[i]==nums[j]) count++;

                if(count==1) ans.push_back(nums[i]);
            }
        }
        set<int> s(ans.begin(), ans.end());
        vector<int> v(s.begin(), s.end());
        return v;
    }
};