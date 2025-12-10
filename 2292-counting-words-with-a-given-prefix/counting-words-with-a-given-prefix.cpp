class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;  
        for(auto &s:words){
            // for(int i=0; i<s.size(); i++){
                // s.substr(idx,length)
                if(s.substr(0,pref.size())==pref)cnt++;
            // }
        }
        return cnt;
    }
};