class Solution {
public:
    int smallestRepunitDivByK(int k) {
        
        if(k%2==0) return -1;
        if(k%5==0) return -1;

        // vector<long long> v={1,11,111,1111,11111,111111,1111111,11111111,111111111};
        // int n=v.size();
        // for(int i=0; i<n; i++){
        //     if(v[i]%k==0) return i+1;
        // }
        // return -1;
        // string num="1";
        // for(int i=1; i<=1e5; i++){
        //     if(stoll(num)%k==0) return num.length();
        //     else num+='1';
        // } // out of range

        //int len=0;
        int rem=0;
        for(int len=1; len<=k; len++){
            rem=((rem*10)+1)%k;
            // num=1 rem-> 1*k
            // agar rem==0 yani k se divisble h
            if(rem==0) return len;
        }
          return -1;
    }
};