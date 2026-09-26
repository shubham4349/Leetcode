class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
       // bracket ke andar jo string h , agar uska koi second val h to usse replace kro

       map<string, string> mp;
       for(auto& k:knowledge){
          mp.insert({k[0],k[1]}); 
          // k.first=name
          // k.second=bob
       }
       string ans="";
       for(int i=0; i<s.size(); i++){
         string temp="";
            if(s[i]=='('){
                i++;
                while(s[i]!=')'){
                    temp+=s[i];
                    i++;
                }

                if(mp.contains(temp)){
                     ans+=mp[temp];
                } else ans+='?'; 
            } else ans+=s[i];
        }
        return ans;
    }
};