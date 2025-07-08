class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        int maxfreq=INT_MIN;
        unordered_map<int,int> count;
        for(auto num : nums){
            if(num%2==0){
                count[num]++;
                maxfreq= max(maxfreq, count[num]);
            }
        }
        int ans=INT_MAX;
        for(auto it : count){
            if(it.second==maxfreq){
                ans = min(ans,it.first);
            }
        }
        if(ans!=INT_MAX) return ans;
        return -1;
    }
};