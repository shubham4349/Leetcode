class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        int n =operations.size();
        vector<string> nums(operations.begin(), operations.end());

        vector<int> ans;
       // int k= ans.size();
        for(int i=0; i<n; i++){
            if(nums[i]=="C") {
                ans.pop_back();
            }
            else if(nums[i]=="D"){
                 int last = ans[ans.size()-1]*2;
                 ans.push_back(last);
            }
            else if(nums[i]=="+"){
                 ans.push_back(ans[ans.size()-1]+ans[ans.size()-2]);

            }else{
                ans.push_back(stoi(nums[i]));
            }
        }
      int sum = accumulate(ans.begin(), ans.end(), 0);
      return sum;
    }
};