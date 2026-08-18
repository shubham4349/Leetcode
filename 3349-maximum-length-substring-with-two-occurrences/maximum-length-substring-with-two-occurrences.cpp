class Solution {
public:
    int maximumLengthSubstring(string s) {
        // pehle sare substr khoj jinme sare char ki freq<=2 ho
        // then unme se maxm size wale ki size return kr

        int n=s.length();
        // brute will work
        vector<int> ans;
        for(int i=0; i<n; i++){
            string temp="";
            map<char,int> mp;
            for(int j=i; j<n; j++){
               temp+=s[j];
               mp[s[j]]++;
               if(mp[s[j]]>2){
                  ans.push_back(j-1-i+1); // uske pehle idx wale tak ka size store kro
                  break;
               }
               ans.push_back(j-i+1); 
            }
            mp.clear();
        }
        return *max_element(ans.begin(),ans.end());
    }
};