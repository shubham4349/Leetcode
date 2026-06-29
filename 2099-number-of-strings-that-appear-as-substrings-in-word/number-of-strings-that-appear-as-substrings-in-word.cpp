class Solution {
public:
    // bool isSubstr(string& s, string& word){

    //    SAHI H BUT LENGHTHY H
    //     int n=word.size();
    //     int m=s.size();
    //     if(m>n) return false;

    //     for(int i=0; i<n; i++){
    //        if(word[i]==s[0]){
    //          string temp=word.substr(i,m);
    //          if(temp==s) return true;
    //        }
    //     }
    //     return false;

    // }
    int numOfStrings(vector<string>& patterns, string word) {
           int cnt=0;
           // word.find(s)!=string::npos -> found
        for(auto& s:patterns){
            if(word.contains(s)) cnt++;
        }
        return cnt;
        
    }
};