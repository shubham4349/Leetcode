class Solution {
public:
    int countSegments(string s) {
        if(s=="") return 0;
        int n=s.size();
        vector<string> v;
        int i=0;
        string st="";
        while(i<n){
            if(s[i]==' '){
               if(!st.empty()) v.push_back(st);
               st="";
            }
            else st+=s[i];
            i++;
        }
        if(st!="") v.push_back(st); 
        return v.size();
    }
};