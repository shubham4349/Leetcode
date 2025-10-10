class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        
        int n=words.size();
        string x="";
        for(int i=0; i<n; i++){
            //for(int j=0; j<=words[i].size(); j++){
                x+=words[i][0];
           // }
        }
        return x==s;
    }
};