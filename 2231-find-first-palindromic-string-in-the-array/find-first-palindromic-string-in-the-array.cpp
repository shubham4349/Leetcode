class Solution {
public:
    // mthd2: using 2 ptr
    bool isPalindrome(string &word){
        int i=0;
        int j=word.size()-1;
        while(i<=j){
           if(word[i]!=word[j]) return false;
           i++;
           j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0; i<n; i++){
            if(isPalindrome(words[i])) return words[i];
        }
        return "";
    }
};