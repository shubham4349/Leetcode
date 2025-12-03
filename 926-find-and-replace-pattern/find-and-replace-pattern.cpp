class Solution {
public: 
    bool checkIsomorphic(string &x,string &pattern){
          if(x.size()!=pattern.size()) return false;
          map<char,char> mp1,mp2;
          for(int i=0; i<x.size(); i++){
             mp1.insert({x[i],pattern[i]});
             mp2.insert({pattern[i],x[i]});
          }
          for(int i=0; i<x.size(); i++){
            if(mp1[x[i]]!=pattern[i] or mp2[pattern[i]]!=x[i]) return false;
          }
          return true;    
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        // revise lc-> 205 first
        int n=words.size();
        vector<string> ans;
        for(auto &s: words){
            if(checkIsomorphic(s,pattern)) ans.push_back(s);
        }
        return ans;
    }
};