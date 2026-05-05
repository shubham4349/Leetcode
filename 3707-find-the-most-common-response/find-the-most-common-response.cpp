class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        // ek response[i] me ek bar hi cnt krna

       map<string,int> mp;
       for(auto& resp:responses){
            set<string> s(resp.begin(),resp.end()); // unique
              for(auto& x:s){
                    mp[x]++;
                }
            // for(auto& resp:response){
            //     s.insert(resp);
            // }
            // v.assign(s.begin(),s.end()); // v bar bar naya set se assign ho rha, purana va;ue hat ja rha
            // s.clear();
       }
    int maxm=INT_MIN;
    for(auto& it:mp){
        maxm=max(maxm,it.second);
    }
    vector<string> ans;
    for(auto& it:mp){
       if(it.second==maxm) ans.push_back(it.first);
    }
    sort(ans.begin(),ans.end());
    return ans[0];
    }
};