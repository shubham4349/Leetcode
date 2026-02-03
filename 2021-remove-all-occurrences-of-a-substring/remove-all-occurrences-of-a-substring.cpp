class Solution {
public:
    bool suffix(string& s, string& part){
         if(s.size()<part.size()) return false;
         int n=s.size(), m=part.size();
         int idx= int(n-m);
         string temp= s.substr(idx); 
         string k="";
         if(temp==part) {
               for(int i=0; i<idx; i++){
                  k+=s[i];
               }
               s=k;
               return true;
         }
       
         return false;
    }
    string removeOccurrences(string s, string part) {
        // s.erase(pos,len); 
        int n=s.size();
        int m=part.size();
        string finall="";
        for(int i=0; i<n; i++){
            finall+=s[i];
            if(suffix(finall,part)){ // agar part suffix hgya 
              
              continue;  
            } 

        }
        return finall;
    }
};