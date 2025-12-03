class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        // vector<int> a;
        vector<vector<int>> ans;

        for(int i=0; i<=n-3; i+=3){
              int a=nums[i],b=nums[i+1],c=nums[i+2];
              if(c-a>k) return {};
              else ans.push_back({a,b,c});
        }
        return ans;
    }
};