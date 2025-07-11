class Solution {
public:
    int countElements(vector<int>& nums) {
        
    //    return nums.size()-2;
    int minm = *min_element(nums.begin(), nums.end());
    int maxm= *max_element(nums.begin(), nums.end());
        int count=0;
        for(int num: nums){
            if(num!=minm and num!= maxm) count++;
        }
        return count;
    }
};