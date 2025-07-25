class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // approahc:2
        set<char> allow(allowed.begin(), allowed.end());
    
       int count=0;
        for(string word : words){
            bool consistentWord=true;
            for(char ch: word){
                if(allow.count(ch)==0){
                    consistentWord=false;
                }
            }
            if(consistentWord) count++;
        }
        return count;
    }
};