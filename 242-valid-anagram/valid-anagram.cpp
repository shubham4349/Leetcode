class Solution {
public:
    bool isAnagram(string s, string t) {
         
         int n= s.length();
         int l = t.length();

         unordered_map<char,int> mp1, mp2;

         for(int i=0; i<n; i++) mp1[s[i]]++;
         for(int i=0; i<l; i++) mp2[t[i]]++;
        
        for(char sm='a'; sm<='z'; sm++){
                   if(mp1[sm]!=mp2[sm]) return false;
        }
        return true;

    }
};