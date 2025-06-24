#define pb push_back
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n= nums.size(); 
        set<int> hello(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=1; i<=n; i++){
            if(hello.find(i)==hello.end()) {
                ans.pb(i);
            }
        }
        return ans;
    }
};