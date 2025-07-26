class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowel ={'a','e','i','o','u','A','E','I','O','U'};
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(vowel.count(s[i]) and !vowel.count(s[j])) j--;
            else if(!vowel.count(s[i]) and vowel.count(s[j])) i++;
            // if(vowel.count(s[i]) and vowel.count(s[j])){
            //     // swap
            // }
            else if(vowel.count(s[i]) and vowel.count(s[j])) {
                swap(s[i],s[j]);
                i++;j--;
            }
            else {
                i++;j--;
            }
        }
        return s;
    }
};