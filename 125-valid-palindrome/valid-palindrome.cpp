class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        // alphanumneric yani- numbers+ alphabets ka set bana
        unordered_set<char> lower; // lowercase alphabets
        char ch='a';
        while(ch!='z') {
            lower.insert(ch);
            ch++;
        }
        lower.insert(ch); // z ko insert kiya
        ch='0';
        while(ch!='9') {
            lower.insert(ch);
            ch++;
        }
        lower.insert(ch); // 9 ko inert kiye
        unordered_set<char> given;
        string temp="";
        for(int i=0; i<n; i++){
             char is = tolower(s[i]);
             if(lower.find(is)!=lower.end()) temp+= is; // agar alphabet h to nye string me push kro
        }
        string orig = temp;
        reverse(temp.begin(), temp.end());
        return temp==orig;

    }
};