class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        // agar char cnt%k==0  to  cnt/k size me dal
        // else 1+rest
        // jese 16 char h and k=3...to 3-3 ke 5 grp banao...with first char as s[0]-rest
        int n=s.size();
        string ss="";
        for(int i=0; i<n; i++){
            if(s[i]!='-'){
                if(isalpha(s[i])) s[i]=toupper(s[i]);
                ss+=s[i];
            }
        }
        string ans="";
        if(ss.size()%k!=0){
            int rem=ss.size()%k;
            int j=0;
            while(j!=rem){
                ans+=ss[j];
                j++;
            }
            ans+='-';
             for(int i=j; i<ss.size(); i++){
                string sss="";
                while(sss.size()!=k){
                    sss+=ss[i];
                    i++;
                }
                i--;
                ans+=sss;
                ans+='-';
            }

        }else{ // s.size()%k==0 case
              for(int i=0; i<ss.size(); i++){
                    string sss="";
                    while(sss.size()!=k){
                        sss+=ss[i];
                        i++;
                    } i--;
                    ans+=sss;
                    ans+='-';
                }
        }
        while(!ans.empty() and ans.back()=='-') ans.pop_back();
        return ans;

    }
};