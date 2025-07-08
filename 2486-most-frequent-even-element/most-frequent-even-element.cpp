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
        for(auto num : nums){
            if(count[num]==maxfreq){
                ans = min(ans,num);
            }
        }
        if(ans!=INT_MAX) return ans;
        return -1;
    }
};