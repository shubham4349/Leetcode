class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        for(int i=0; i<s.size(); i++){
            // char x=s[i];
            string st="";
            while(i<s.size() and s[i]!=' '){
               st+=s[i];
               i++;
            }
            v.push_back(st);
        }
        if(pattern.size()!=v.size()) return false;
        // now similiar as isomorhpic lc->205
        int n=pattern.size();
        map<char,string> mp1;
        map<string,char> mp2;
        for(int i=0; i<n; i++){
            mp1.insert({pattern[i],v[i]});
            mp2.insert({v[i],pattern[i]});
        }
           // mp1                // mp2
            // a-> dog            dog->a
            // b-> cat            cat->b
            // b-> cat            cat->b
            // a-> dog            dog->a
        for(int i=0; i<n; i++){
            char x=pattern[i];
            string y=v[i];
            if(mp1.count(x) and mp1[x]!=y) return false;
            if(mp2.count(y) and mp2[y]!=x) return false;
         
        }
        return true;
    }
};