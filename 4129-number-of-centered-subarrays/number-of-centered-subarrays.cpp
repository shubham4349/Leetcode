class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n=nums.size();
       // subarr ka sum usi subarray ke kisi ek element se miln chahiye
        int cnt=0;
        for(int i=0; i<n; i++){
            set<int> sub;
            int sum=0;
            for(int j=i; j<n; j++){
                sub.insert(nums[j]);
                sum+=nums[j];
                if(sub.find(sum)!=sub.end()) cnt++;
            }
        }
        return cnt;
    }
};