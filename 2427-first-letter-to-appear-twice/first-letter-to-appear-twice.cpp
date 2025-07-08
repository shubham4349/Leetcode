class Solution {
public:
    char repeatedCharacter(string s) {     
        unordered_map<char,int> count;
        char ans;
        for(auto ch: s){
            count[ch]++;
            if(count[ch]==2){
                ans= ch;
                break;
            }
        }
        return ans;
    }
};