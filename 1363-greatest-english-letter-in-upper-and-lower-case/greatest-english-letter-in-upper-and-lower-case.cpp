class Solution {
public:
    string greatestLetter(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(char ch: s) mp[ch]++;
        // for(auto it: mp){
            
        // }
        vector<string> arr;
        for(int i=0; i<n; i++){
             string ch="";
            if(mp.count(tolower(s[i])) and mp.count(toupper(s[i]))){
                // maxm=(maxm, toupper(s[i]));
                ch+=toupper(s[i]);
                arr.push_back(ch);
            }
        }
        if (arr.empty()) return "";
        sort(arr.begin(), arr.end(),greater<string>());
        return arr[0];
    }
};