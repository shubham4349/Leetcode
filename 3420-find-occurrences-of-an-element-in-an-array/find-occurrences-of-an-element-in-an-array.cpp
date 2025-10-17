class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
       
       map<int,int> queryIdx;
       int a=1;
       for(int i=0; i<nums.size(); i++){
          if(nums[i]==x){
              queryIdx.insert({a,i});
              a++;
          }
       }
       vector<int> ans;
       for(int i=0; i<queries.size(); i++){
           if(a-1<queries[i]) ans.push_back(-1); // agar queri[i] , hash ke maxm key se bdi hui to
           else ans.push_back(queryIdx[queries[i]]);
       }
         return ans;
    }
};