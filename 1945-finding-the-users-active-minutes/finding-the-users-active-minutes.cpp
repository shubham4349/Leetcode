class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        // har id ke unique minutes cnt kr
        // jese for id0-> 2,5 minutes-> unique->2
        
        // mthd-2
        vector<int> ans(k,0);
        map<int,set<int>> mp;
        for(auto &v:logs){
            mp[v[0]].insert(v[1]);
        }
        for(auto &m:mp){
            int time=m.second.size();
            ans[time-1]++; // 0->2,1->2; time=2 ke liye ans[2] do bare increase kr rha 
        }
        return ans;
    }
};