class Solution {
public:
    bool isPali(string& s){
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n=s.size();
        // brute
        int cnt=0;
        for(int i=0; i<n; i++){
            string st="";
            for(int j=i; j<n; j++){
                 st+=s[j];
                 if(isPali(st)) cnt++;
            }
        }
        return cnt;
    }
};