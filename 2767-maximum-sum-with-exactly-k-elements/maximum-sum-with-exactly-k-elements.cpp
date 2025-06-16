class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        int score=0;
       // int maxscore = 0;

        // max element pe k times operate krte rehna h

        while(k--){
            int maxm = *max_element(nums.begin(), nums.end());
            for(int i=0; i<n; i++){
                if(nums[i]==maxm) nums[i]++;
            }
            score += maxm;
        }
        return score;

    }
};