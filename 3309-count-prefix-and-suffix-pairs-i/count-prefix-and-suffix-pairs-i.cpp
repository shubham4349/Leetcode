class Solution {
public:
    bool isPreSuff(string& s1, string& s2){
        int n1=s1.size(),n2=s2.size();
        // s.substr(pos,len)
        string pre=s2.substr(0,n1);
        // pa-> papa
        // reverse(s2.begin(),s2.end());--> wrong approach
        // string suff=s2.substr(0,n1);
        string suff="";
        for(int i=0; i<n2; i++){
            if(i==n2-n1){
                suff=s2.substr(i,n1);
                break;
            }
        }
        if(suff==s1 and pre==s1) return true;
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        // agar s1 pre and suff dono h s2 ka then return true
           int n=words.size();
           int cnt=0;
           for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                     if(isPreSuff(words[i],words[j]))cnt++;
                }
           }
           return cnt;
    }
};