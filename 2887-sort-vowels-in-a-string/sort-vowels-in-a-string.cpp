#define all(v) (v).begin(),(v).end()
class Solution {
public:
    bool isVowel(char ch){
         if(tolower(ch)=='a' or tolower(ch)=='e' or tolower(ch)=='i' or tolower(ch)=='o' or tolower(ch)=='u') return true;
         return false;
    }
    string sortVowels(string s) {
        int n=s.length();
        vector<char> vowel;
        for(char ch: s){
            if(isVowel(ch)) vowel.push_back(ch);   
        }
        sort(all(vowel));
        int idx=0;
        for(int i=0; i<n; i++){
            if(isVowel(s[i])){
                s[i]=vowel[idx];
                idx++;
            }
        }
        return s;

    }
};