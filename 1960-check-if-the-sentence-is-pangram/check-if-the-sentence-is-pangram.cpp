class Solution {
public:
    bool checkIfPangram(string sentence) {
        string alpha="abcdefghijklmnopqrstuvwxyz";
        set<char> s(sentence.begin(),sentence.end());
        string ans;
        ans.assign(s.begin(),s.end());
        return ans==alpha;

    }
};