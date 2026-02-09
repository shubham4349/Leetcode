class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> stk;
        int n=nums.size();
        for(int i=0; i<n; i++){  
             long long curr=nums[i];
              while(!stk.empty() and stk.top()==curr){
                  stk.pop();
                  curr*=2; // jitte bar top ke equal h utne bar 2 se multiply  
                  // agar top pe 2 h to, 4 aayega
              } 
               stk.push(curr); 
        }
        vector<long long> ans;
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};