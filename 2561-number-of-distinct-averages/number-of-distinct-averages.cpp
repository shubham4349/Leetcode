class Solution {
public:

    int distinctAverages(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(), nums.end());
        set<double> avgSet;
        int i=0;
        int j=n-1;
        while(i<=j){
            double avg = (nums[i]+nums[j])/2.0;
            avgSet.insert(avg);
            i++;
            j--;
        }
        return avgSet.size();
    }
};