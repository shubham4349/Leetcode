class Solution {
public:
    bool isVowelStr(string s,int i){
        if(s[i]=='a' or s[i]=='o' or s[i]=='i' or s[i]=='e' or s[i]=='u' ) return true;
       return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left; i<=right; i++){
           //  for(int j=0; j<=words[i].size(); j++){
                     string str=words[i];
                     int n=str.size();
                     if(isVowelStr(str,0) and isVowelStr(str,n-1)){
                        count++;
                     }
             //}
        }
        return count;
    }
};