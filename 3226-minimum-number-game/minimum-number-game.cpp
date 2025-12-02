class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // vector<int> arr;
        sort(nums.begin(),nums.end());
        for(int i=0; i<=nums.size()-2; i+=2){
            swap(nums[i],nums[i+1]);
        }
        return nums;
    }
};