class Solution {
public:
    int findLHS(vector<int>& nums) {
      
        int n=nums.size();
        unordered_map<int,int> count;
        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }
        int maxPairFreq=0; // nums[i] and nums[i]+1 me jinko addup krke max freq aayi usko return krdo

         for(int i=0; i<n; i++){
             if(count.count(nums[i]+1)) {  // agar successor h to
                int freq = count[nums[i]] + count[nums[i]+1];
                maxPairFreq = max(maxPairFreq, freq);
             }
         }
         return maxPairFreq;

    }
};