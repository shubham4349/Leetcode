class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
       // 2 pair ka sum if multiple of 24 the cnt++
        int cnt=0;
        
        for(int i=0; i<hours.size(); i++){
            for(int j=i+1; j<hours.size(); j++){
                int sum=hours[i]+hours[j];
                if(sum%24==0) cnt++;
            }
        }
        return cnt;

    }
};