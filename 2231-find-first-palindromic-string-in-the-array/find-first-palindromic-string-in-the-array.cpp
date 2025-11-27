class Solution {
public:
    // mthd1: using rev bultin
    bool isPalindrome(string word){
        string orig=word;
        reverse(word.begin(),word.end());
        return word==orig;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string ans;
        for(int i=0; i<n; i++){
            if(isPalindrome(words[i])){
                ans=words[i];
                break;
            }
        }
        return ans;
    }
};