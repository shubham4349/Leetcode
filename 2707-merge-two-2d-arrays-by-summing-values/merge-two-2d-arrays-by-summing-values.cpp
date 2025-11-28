class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
       
        map<int,int> mp;
        for(auto &v:nums1){
            int id=v[0];
            int val=v[1];
            mp[id]+=val; // 1->2 
        }
        for(auto &v:nums2){
            mp[v[0]]+=v[1]; 
        }
        vector<vector<int>> ans;
        for(auto &[id,val]:mp) ans.push_back({id,val});
        return ans;
    }
};