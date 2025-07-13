class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.length();
        int m=shifts.size();
        // BRUTE:
        // for(int i=0; i<m; i++){
        //    for(int j=0; j<=i; j++){
        //       s[j]= (s[j]-'a'+shifts[i])%26 +'a';  // go to lc->3307
        //    }
        // }
        // return s;
        //  // ch-a -> z-a -> 25
        // // +1-> shift by 1-> 26 
        // // 26%26 = 0
        // // 0+'a' = a, so z become a!!

        //Approach 2:
        // a-3 bar aage
        // ab-5
        // abc=9 

        // backward traveserl kr
        // c-> 9
        // b-> 9+5 bar
        // a-> 9+5+3 --> clearly the pattern of suffic sum
        long long total=0;
        for(int i=n-1; i>=0; i--){
           total = (total+shifts[i])%26;
           s[i] = (s[i]-'a'+total)%26+'a';
        }
        return s;
    }
};
 