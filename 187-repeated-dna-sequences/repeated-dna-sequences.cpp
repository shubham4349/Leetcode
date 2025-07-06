class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        int n=s.length();
        unordered_map<string,int> mp;
        // brute
        // for(int i=0; i<n; i++){
        //     string temp="";
        //     for(int j=i; j<n; j++){
        //         if(s[j]=='A' or s[j]=='C' or s[j]=='G' or s[j]=='T'){
        //             temp+= s[j];
        //             if(temp.length()==10){
        //                 mp[temp]++;
        //             }
        //         }
        //     }
        // }
        // vector<string> ans;
        // for(auto it: mp){
        //     if(it.second>1) ans.push_back(it.first);
        // }
        // return ans;
        for(int i=0; i<=n-10; i++){
            // s.substr(start idx, length)
            string temp= s.substr(i,10);
            mp[temp]++;
        }
        vector<string> ans;
        for(auto it: mp){
            if(it.second>1) ans.push_back(it.first);
        }
        return ans;
    }
};
