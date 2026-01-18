class Solution {
public:
    int vowelConsonantScore(string s) {
        
        int vowel=0,conso=0;
        for(char& ch:s){
            if(isalpha(ch)){
                if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
                    vowel++;
                }else conso++;
            }
        }
        if(conso>0) return floor(vowel/conso); // floor(4.9)->4
                                               // floor(-4.9)->5 
        // if(x>0) return (int)x ; 
        // else if(x<0) return (int)abs(x-1); // abs(-4.9-1) = abs(-5.9)
        return 0;
    }
};