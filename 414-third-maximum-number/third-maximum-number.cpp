class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
       set<int, greater<int>> set1(nums.begin(), nums.end());
      

        if(set1.size()<3) return *set1.begin() ;
           
        auto it = set1.begin();
        advance(it, 2);

        return *it;
    }
};