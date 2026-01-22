class Solution {
public:
    vector<string> partitionString(string s) {
        int n=s.size();
         set<string> ans;
         string temp="";
        vector<string> res;
        for(int i=0; i<n; i++){
              temp+=s[i];
              if(ans.find(temp)==ans.end()){
                 // pehle nhi dekha h to
                 ans.insert(temp);
                 res.push_back(temp);
                 temp="";
              }
        }
        // vector<string> res;
        // res.assign(ans.begin(),ans.end());
        return res;
    }
};