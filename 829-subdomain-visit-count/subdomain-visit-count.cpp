class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
         int n=cpdomains.size();
         map<string,int> mp;

         for(int i=0; i<n; i++){
             string s=cpdomains[i];
             // digit
             string digit="";
             for(int k=0;k<s.size(); k++){
                 if(isdigit(s[k])) digit+=s[k];
                 else break;
             }
             int num=stoi(digit);
             // domains
             string temp="";
             for(int j=s.size()-1; j>=0; j--){
                  if(s[j]=='.' or s[j]==' '){
                     string helper=temp; // temp=moc
                     reverse(helper.begin(),helper.end());
                     mp[helper]+=num;
                  }
                    if(s[j]==' ') break;
                   temp+=s[j];
             }
         }
         vector<string> ans;
         string s="";
         for(auto& [domain,num]: mp){
             s+=to_string(num);
             s+=" ";
             s+=domain;
             ans.push_back(s);
             s="";
         }
         return ans;
    }
};