class Solution {
public:
    string greatestLetter(string s) {
        int n=s.length();
        //Approach2: sorting the string
        sort(s.begin(), s.end());
        unordered_map<char,int> mp;
        for(char ch: s) mp[ch]++;

        for(int i=n-1; i>=0; i--){
            char upp= toupper(s[i]);
            char low= tolower(s[i]);
            if(mp.count(upp) and mp.count(low)){
                string ans="";
                ans+=upp;
                return ans;
            }
        }
        return "";
    }
};