#define pb push_back
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1,arr2;
        arr1.pb(nums[0]);
        arr2.pb(nums[1]);

        for(int i=2; i<nums.size(); i++){
            if(arr1.back()>arr2.back()) arr1.pb(nums[i]);
            else arr2.pb(nums[i]);
        }
        for(auto& num:arr2) arr1.pb(num);
        return arr1;
    }
};