class Solution {
public:
    int getLeastFrequentDigit(int n) {
        
        unordered_map<int,int> count;
        while(n>0){
            int digit=n%10;
            count[digit]++;
            n=n/10;
        }
        int minmCount=INT_MAX;
        for(auto it: count){
            int freq=it.second;
            minmCount=min(minmCount,freq);
        }
        int ans=0;
        int minmAns=INT_MAX;
        for(auto it: count){
            if(it.second==minmCount){
                ans=it.first;
                minmAns=min(ans,minmAns);
            }
        }
        return minmAns;


    }
};