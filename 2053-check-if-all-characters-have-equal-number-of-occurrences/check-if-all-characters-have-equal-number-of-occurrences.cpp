class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        map<char,int> mp;
        for(char ch : s) mp[ch]++;

        int freq= mp[s[0]]; // common freq jo true rehne ke liye chaihye

        for(char ch : s){
            if(mp[ch]!=freq) return false;
         }

           return true;

    }
};