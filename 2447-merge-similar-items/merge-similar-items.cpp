class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
         map<int,int> mp;

         for(auto &v:items1){
            int val=v[0];
            int wt=v[1];
            mp[val]+=wt;
         }
          for(auto &v:items2){
            int val=v[0];
            int wt=v[1];
            mp[val]+=wt;
         }
         vector<vector<int>> ans;
         for(auto &[k,v]:mp){
            ans.push_back({k,v});
         }
         return ans;

    }
};