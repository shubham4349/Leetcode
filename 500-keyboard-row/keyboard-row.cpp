class Solution {
public:
    bool RowCheck(string s1, string s2){
        for(char ch: s1){
            if(s2.find(ch)==string::npos) return false;
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        
        string first="qwertyuiop";
        string second="asdfghjkl";
        string third="zxcvbnm";

        int n=words.size();
        vector<string> ans;

        for(int i=0; i<n; i++){
            string org=words[i];
            string s=words[i];
            transform(s.begin(), s.end(), s.begin(), ::tolower); 
            bool checkone=RowCheck(s,first);
            bool checktwo=RowCheck(s,second);
            bool checkthree=RowCheck(s,third);

             if(checkone==true or checktwo==true or checkthree==true) ans.push_back(org);
        }
        return ans;
    }
};