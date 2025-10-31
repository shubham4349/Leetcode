#define ghusao push_back
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> count;
        for(int num: nums) count[num]++;
         vector<int> ans;
        for(auto it: count){
            if(it.second>1) ans.ghusao(it.first);
        }
        return ans;
    }
};