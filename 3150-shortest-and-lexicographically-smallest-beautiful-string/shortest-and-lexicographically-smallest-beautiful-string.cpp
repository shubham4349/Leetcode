class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        // condn-k ones cnt=k
        // so o ans hoga uski minm len==k hogi
        // so k<=ans<=s.size();
        int ones=0;
       
        string ans="";
        for(int i=0; i<s.size(); i++){
            int ones=0;
            string temp="";
            for(int j=i; j<s.size(); j++){
                 temp+=s[j];
                 if(s[j]=='1') ones++;
                 if(ones==k){ 
                     
                     if(ans.empty() or temp.size()<ans.size() or(temp.size()==ans.size() and temp<ans)){
                        ans=temp; 
                    }
                    break;
                 }
            }
           
        }
        
        return ans;  
    }
};