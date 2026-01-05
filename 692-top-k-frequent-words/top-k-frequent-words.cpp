class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        vector<pair<int,string>> vp; // pq
        map<string,int> mp;

        for(string &s:words){
            mp[s]++;
        }
        for(auto &[str,cnt]:mp){ // mp.sec=cnt
            vp.push_back({cnt,str});
        }
      //  sort(vp.begin(),vp.end(),greater<pair<int,string>>());
        // cnt-> bade se chota ->desc
        // but cnt same rehne par-> string-> chote se bada->asc
        sort(vp.begin(),vp.end(),[](auto &a,auto &b){
             if(a.first==b.first) return a.second<b.second;
             return a.first>b.first; 
        }); // asc
        vector<string> ans;
        for(int i=0; i<vp.size(); i++){
            // int last=vp.size();
            // if(last-i==k)
            if(ans.size()==k) break;
            ans.push_back(vp[i].second);
            
        }
        return ans;
    }
};