class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       map<char,int> mp;
       char ch='a';
       for(int i=0; i<weights.size(); i++){
           if(ch<='z')  mp.insert({ch,weights[i]%26});
            ch++;
       }
       map<int,char> alpha;
       char chh='z';
       for(int i=0; i<26; i++){
          if(chh>='a')  alpha.insert({i,chh});
            chh--;
       }
       string ans="";
       for(auto& s: words){
         int sum=0;
         for(auto& ch:s){
           sum+=mp[ch];
         }
         sum=sum%26;
         ans+=alpha[sum];
       }
       return ans;
    }
};