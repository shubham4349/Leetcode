class Solution {
public:
    string afterOpn(string s){
        int n=s.length();
        for(int i=0; i<n; i++){
            s[i] = s[i]+1;
        }
        return s;
    }
    char kthCharacter(int k) {
        string word="a";
        // int n=word.size();
        while(word.size()<k){
            word += afterOpn(word);
        }
        return word[k-1];

    }
};