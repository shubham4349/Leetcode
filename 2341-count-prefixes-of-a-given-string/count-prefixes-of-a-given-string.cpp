class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        // optimal:
        int n=words.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(s.find(words[i])==0) count++; // agar string s ke start me ho to uska index 0 rehta h, so thats what we are checking
        }
        return count;
        
    }
};