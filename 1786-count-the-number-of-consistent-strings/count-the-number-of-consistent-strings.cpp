class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // approahc:1
        set<char> allow;
        for(char ch: allowed) allow.insert(ch);

        vector<string> ans;
        for(string word : words){
            for(char ch: word){
                if(allow.count(ch)==0){
                    ans.push_back(word);
                    break;
                }
            }
        }
        // int count = abs(words.size()-ans.size());
        int w1=words.size();
        int w2= ans.size();
        int count= abs(w1-w2);
        return count;
    }
};