class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       // using builtin:2
       k%=nums.size();
    //    reverse(nums.begin(),nums.end());
    //    reverse(nums.begin(), nums.begin()+k); // rev first k ele
    //    reverse(nums.begin()+k,nums.end()); // rev remaining n-k ele

    // one liner:
       std::rotate(nums.begin(), nums.end()-k, nums.end());
    }
};