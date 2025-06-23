class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        // done!
        int n=nums.size();
        int minmDist= INT_MAX;
        int dist=INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                     dist=abs(i-start);
                     minmDist =min(dist,minmDist);
            }
        }
        return minmDist;
    }
};