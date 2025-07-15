class Solution {
public:
    bool isValid(string word) {
        // set<char> vowel;
        // set<char> conso;
        // for(char ch='a'; ch<='z'; ch++){
        //     if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u') vowel.insert(ch);
        //     else conso.insert(ch);
        // }
        int n=word.length();
        if(n<3) return false;
        int vowel=0, conso=0;
        for(int i=0; i<n; i++){
             char ch= tolower(word[i]);
             if(!isalnum(ch)) return false;
           
            if(isalpha(ch)){
                if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u') vowel++;
                else conso++;
            }
        }

        if(vowel>=1 and conso>=1) return true;
        return false;
    }
};