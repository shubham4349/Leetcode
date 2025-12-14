class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        // har id ke unique minutes cnt kr
        // jese for id0-> 2,5 minutes-> 2

        vector<int> ans(k);

        map<int,set<int>> mp;
        // set<int> s;
        for(auto &v:logs){
            int id=v[0];
            int time=v[1];
            mp[id].insert(time);
            // mp.insert({id,{time}});
        }
        map<int,int> idtm; // id-time(unique)
        for(auto &m:mp){
            idtm.insert({m.first,m.second.size()});
        }
        map<int,int> tmid; // tm-id count
        for(auto &m:idtm){
            int uniqueTime=m.second;
            tmid[uniqueTime]++;
        }
        // for(int i=0; i<n; i++){
            for(int j=1; j<=k; j++){
                ans[j-1]=tmid[j];
            }
            return ans;
        // }
    }
};