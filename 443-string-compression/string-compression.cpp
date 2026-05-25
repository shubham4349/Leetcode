class Solution {
public:
    int compress(vector<char>& chars) {
       // jhatu question alert!! 
        string s="";
        int cnt=0;
        if(chars.size()==1) return 1;
        for(int i=0;i<chars.size(); i++){
            while(i+1<chars.size() and chars[i]==chars[i+1]){
                cnt++;
                i++;
            }
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