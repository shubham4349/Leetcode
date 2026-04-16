class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        // a3+b3 ke form me kitne numbers h jo <=N ho
        // max value 1e9 h , so hm iske cube root 1e3 take iterate kr sakte h
        int limit=cbrt(n);
        map<int,int> mp; // number-cnt pair
        for(int i=1; i<=limit; i++){
            int a3=i*i*i;
            for(int j=i; j<=limit; j++){
                int b3=j*j*j;
                int sum=a3+b3; // hardy-ramanuj num
                if(sum>n) break;
                  mp[sum]++;
            }
        }
        vector<int> ans;
        for(auto& [num,cnt]: mp){
            if(cnt>=2) ans.push_back(num);
        }
        return ans;
    }
};