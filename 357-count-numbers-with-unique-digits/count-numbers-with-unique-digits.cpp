class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        // if(n==0) return 1;
        // if(n==1) return 10; // 1 digit ke 10 unique
        // count=9*9*8*7.... 
        // 2 digit  unique- 9*9+1 digit ke unique(+10)
        // 3 digit ke unique-> 9*9*8+(2 digit)
        vector<int> cnt(11,0);// 0 se 10
        cnt[0]=1;
        cnt[1]=9;
        for(int i=2; i<=10; i++){
            cnt[i]=cnt[i-1]*(11-i); // 9,8,7
            // cnt[2]=9*9-> 2 digit ke total 81 unique
            // cnt[3]=9*9*8-> 3 digit ke 
        }
        int ans=0;
        for(int i=0; i<=n; i++){
            ans+=cnt[i];
        }
        return ans;
    }
};