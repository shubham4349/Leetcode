class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
          string ans="";
          int j=0;
          for(int i=0; i<s.size(); i++){
              if(j<spaces.size() and i==spaces[j]){//mtlb space chahiye
                ans+=" ";
                j++;
              }
              ans+=s[i];
          }
          return ans;
    }
};