class Solution {
public:
    bool isAnagram(string s, string t) {
         
         int n= s.length();
         int l = t.length();

         unordered_map<char,int> mp1, mp2;

         for(int i=0; i<n; i++) mp1[s[i]]++;
         for(int i=0; i<l; i++) mp2[t[i]]++;
        
         int large = ( n>l ? n : l);

         string big;
         big = (n>l ? s : t);

         for(int i =0; i<large; i++){
            // if(mp1.count(t[i])==0) return false; // nhi contain krta to false return
            if(mp1[big[i]]!=mp2[big[i]]) return false;
         }
        return true;

    }
};