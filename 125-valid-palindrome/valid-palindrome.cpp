class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        // approahc:2 -> using builtin method
        string temp;
        for(int i=0; i<n; i++){
            if(isalnum(s[i])) temp+= tolower(s[i]);
        }
        string orig=temp;
        reverse(temp.begin(), temp.end());
        return orig==temp;
    }
};