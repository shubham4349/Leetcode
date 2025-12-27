class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        // TLE
        // set<int> st;
        // for(int i=0; i<n; i++){
        //     //st.insert(nums[i]);
        //     int x=duration;
        //     while(x--){
        //         st.insert(timeSeries[i]);
        //         timeSeries[i]++;
        //     }
        // }
        // return st.size();
        int cnt=0;
        for(int i=0; i<n-1; i++){
            int gap=timeSeries[i+1]-timeSeries[i]; 
            // agar gap<duration se to cnt+=gap
            cnt+=min(duration,gap);
        }
        return cnt+duration; // after processing final attack
    }
};