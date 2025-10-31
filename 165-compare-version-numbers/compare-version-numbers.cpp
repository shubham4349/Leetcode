#define ll long long
class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        // concept: 
        // compare every interger between dots
        // 1.3.2 vs 1.2.3 
        // 1 vs 1 -> same
        // 3 vs 2-> 3>2 so return 1

        // 2 loop lagao
        // 1 pure string ko traverse krega, innner dots ke bech me compare

        int i=0,j=0;
        int n1=version1.size(),n2=version2.size();

        while(i<n1 or j<n2){ // string traversiing ke liye
             
             ll num1=0,num2=0;
             string v1="",v2="";
             while(i<n1 and version1[i]!='.'){
                v1+=version1[i];
                i++;
             }
            if(!v1.empty()) num1=stoll(v1);
            
             while(j<n2 and version2[j]!='.'){
                v2+=version2[j];
                j++;
             } 
            if(!v2.empty()) num2=stoll(v2);
            
             if(num1>num2) return 1; // cpmaring nums between each dots
             if(num2>num1) return -1;
             i++;j++;

        }
        return 0;

    }
};