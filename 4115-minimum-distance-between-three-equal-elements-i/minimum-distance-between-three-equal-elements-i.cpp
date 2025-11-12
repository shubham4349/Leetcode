class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int minm=INT_MAX;
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                for(int k=0; k<n-2; k++){
                     if(i!=j and j!=k and k!=i){
                        if(nums[i]==nums[j] and nums[j]==nums[k]){
                            minm=min(minm, abs(i-j)+abs(k-i)+ abs(j-k));
                        }
                     }
                }
            }
        }
        return minm==INT_MAX?-1:minm;
    }
};