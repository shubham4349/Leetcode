class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      
      int n=nums.size();
      map<int,int> mp;
      for(int num:nums) mp[num]++;

      vector<pair<int,int>> vp;
      for(auto &[num,cnt]:mp){
         vp.push_back({cnt,num});
      }
      sort(begin(vp),end(vp),greater<pair<int,int>>());
      vector<int> ans;

      for(int i=0; i<vp.size(); i++){
         if(ans.size()>=k) break;
         else ans.push_back(vp[i].second);
      }
      return ans;
    }
};