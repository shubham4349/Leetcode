class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        // pehla kam-> peak element khoj -> maxm ele
        // fir asc/ desc me partition kr
        int n=nums.size();
        int peak=INT_MIN;
        for(int& num:nums){
            peak=max(num,peak);
        }
        int peak_idx=0;
        for(int i=0; i<n; i++){
            if(nums[i]==peak){
                peak_idx=i;
                break;
            }
        }
        long long asc_sum=0;
        long long desc_sum=0;

        for(int i=0; i<=peak_idx; i++){
            asc_sum+=nums[i];
        }
        for(int i=peak_idx; i<n; i++){
            desc_sum+=nums[i];
        }
        if(asc_sum>desc_sum) return 0;
        else if(asc_sum<desc_sum) return 1;
        return -1;

    }
};