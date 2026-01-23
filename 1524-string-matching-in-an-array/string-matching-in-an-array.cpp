class Solution {
public:
    bool isSubstring(string& x ,string& s){
         int n=x.size();
         int m=s.size();
         if(n>m) return false; // substr nhi ho skta
         string temp="";
         for(int i=0; i<m; i++){
            temp=s.substr(i,n);
            if(temp==x) return true;
         }
         return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        // brute:
        set<string> ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                  // agar words[i] substr h kisi ka then return it
                  if(i!=j and isSubstring(words[i],words[j])){
                       ans.insert(words[i]);
                  }
            }
        }
        vector<string> res(ans.begin(),ans.end());
        return res;
    }
};