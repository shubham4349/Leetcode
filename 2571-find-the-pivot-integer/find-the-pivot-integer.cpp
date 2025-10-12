class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        // brute:
        vector<int> prefix(n+1,0);
       // prefix[0]=1;
        for(int i=1; i<=n; i++){
             prefix[i]=prefix[i-1]+i;
        }
        vector<int> suffix(n+2,0);
       // suffix[n-1]=n;
        for(int i=n; i>=1; i--){
            suffix[i]=suffix[i+1]+ i;
        }
        for(int i=1; i<=n;i++){
            if(prefix[i]==suffix[i]) return i;
        }
        return -1;
    }
};