class Solution {
public:
    int compress(vector<char>& chars) {
        // jitne char h unka cnt unke sath ek naye string me append kr
        // map<char,int> mp;
        // for(auto& ch:chars){
        //     mp[ch]++;
        // }
        // string ans="";
        // for(auto&[key,val]:mp){
        //    ans+=key;
        //    string cnt=to_string(val);
        //    ans+=cnt;
        // }
        // int n=ans.size();
        // return n;
        string s="";
        int cnt=0;
        if(chars.size()==1) return 1;
        for(int i=0;i<chars.size(); i++){
            while(i+1<chars.size() and chars[i]==chars[i+1]){
                cnt++;
                i++;
            }
         //   i--;
            cnt++; 
            s+=chars[i];
            if(cnt>1)  s+=to_string(cnt);
            cnt=0;
        }
         for(int i=0;i<s.size();i++) {
            chars[i]=s[i];
        }
        
        return int(s.size());
    }
};