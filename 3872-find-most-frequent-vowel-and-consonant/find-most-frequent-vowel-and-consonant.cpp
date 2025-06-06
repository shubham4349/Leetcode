class Solution {
public:
    int maxFreqSum(string s) {
       
       unordered_map<int,int> mp;

    int vowel_max=0, conso_max=0;
     for(int i =0; i<s.length(); i++){
         mp[s[i]]++; // sakna  freq count hoga
         if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                vowel_max= max(vowel_max, mp[s[i]]);
            }
             else conso_max =max(conso_max, mp[s[i]]);
       }
       return vowel_max + conso_max;
        
    }
};