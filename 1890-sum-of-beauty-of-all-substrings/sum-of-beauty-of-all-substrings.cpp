class Solution {
public:
    int beautySum(string s) {
        int beauty=0;
        for(int i=0; i<s.size(); i++){
            map<char,int> freq;
            for(int j=i; j<s.size(); j++){
                freq[s[j]]++;
                int most=INT_MIN;
                int least=INT_MAX;
                for(auto it: freq){ 
                    most=max(most,it.second);
                    least=min(least,it.second);
                }
                 beauty+=(most-least);
            }
        }
        return beauty;
    }
};