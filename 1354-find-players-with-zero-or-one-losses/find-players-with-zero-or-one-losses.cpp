class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int m=matches.size();
        int n=matches[0].size();
        // storing every players
        set<int> st;
        for(int i=0; i<m; i++){
                st.insert(matches[i][0]); 
                 st.insert(matches[i][1]); 
        }
        vector<int> vec(st.begin(),st.end());
        // matches[i][1]-> losers ka list
        set<int> losers;
         for(int i=0; i<m; i++){
                 losers.insert(matches[i][1]); 
        }
        // check kro st ke konse elemnts losers me nhi h--> answer[0]
        vector<vector<int>> ans(2);
        for(int i=0; i<vec.size(); i++){
            if(losers.find(vec[i])==losers.end()){ // losers me nhi h to answer me dal                     
               ans[0].push_back(vec[i]);
            }
        }
        // lost exactly one
        map<int,int> count;
         for(int i=0; i<m; i++){
                 count[matches[i][1]]++;
        }
        for(auto [key,val]:count){
            if(val==1) ans[1].push_back(key);
        }
         return ans;
    }
};