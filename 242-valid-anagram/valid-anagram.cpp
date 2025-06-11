class Solution {
public:
    bool isAnagram(string s, string t) {
         
         int n= s.length();
         int l = t.length();

         unordered_map<char,int> mp1 ; 

         for(int i =0; i<n; i++){
            mp1[s[i]]++;
         }
          for(int i =0; i<l; i++){
            mp1[t[i]]--;
         }

         int big = (n>l? n:l);
         string bigstring = (n>l? s:t);
         for(int i =0; i<big; i++){
            if(mp1[bigstring[i]]!=0) return false;
         }
         return true;
         
         
    }
};