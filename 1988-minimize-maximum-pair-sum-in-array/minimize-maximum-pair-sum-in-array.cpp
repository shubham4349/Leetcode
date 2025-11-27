class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        // catch-> pairing hi aise kro ki bad me jo max pair sum aaye...vo sare combn try krne pe sbse kam wali ho
        // jese -> 3 5 2 3
        //   isko 3,2 ; 5,3
        //        max(5,8)-> 8 
        //        but 
        //     agar   3,3 and 5,2
        //        max(6,7) -> 7 ans!!
        vector<int> pairsum;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        while(i<j){
            pairsum.push_back(nums[i]+nums[j]);
            i++;j--;
        }
        int ans=*max_element(pairsum.begin(),pairsum.end());
        return ans;

    }
};