class Solution {
public:
    bool checkIfPangram(string sentence) {
        // method 1
        string alpha="abcdefghijklmnopqrstuvwxyz";
        // set<char> s(sentence.begin(),sentence.end());
        // string ans;
        // ans.assign(s.begin(),s.end());
        // return ans==alpha;

        // method 2
        for(int i=0; i<26; i++){
            if(sentence.find(alpha[i])==string::npos) return false;
        }
        return true;

    }
};