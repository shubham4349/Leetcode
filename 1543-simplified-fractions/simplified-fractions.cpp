class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        // fractions ki val 0 se jyada and 1 se kam honi chahiye
        // deno<=n
        // yani num<n, kyuki n hojyaega to ans 1 hojayega 
        // and den>num tabi 0 and 1 ke bich me aayega

        vector<string> ans;
        for(int num=1; num<n; num++){
            for(int den=num+1; den<=n; den++){
                if(__gcd(num,den)==1){ // tabhi fraction hoga
                    ans.push_back(to_string(num)+"/"+to_string(den));
                }
            }
        }
        return ans;


    }
};