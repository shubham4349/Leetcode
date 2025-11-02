#define all(x) (x).begin(),(x).end()
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxm=*max_element(all(nums));
         int minm=*min_element(all(nums));
         vector<int> ans;

         set<int> s(all(nums)); 
         for(int i=minm+1; i<maxm; i++){
            if(s.find(i)==s.end()) ans.push_back(i);// agar nums me nhi h to ans me dal
         }
         return ans;

    }
};