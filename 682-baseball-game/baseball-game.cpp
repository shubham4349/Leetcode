class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        int n =operations.size();

        vector<int> ans;

        for(int i=0; i<n; i++){
            if(operations[i]=="C") {
                ans.pop_back();
            }
            else if(operations[i]=="D"){
                 int last = ans[ans.size()-1]*2;
                 ans.push_back(last);
            }
            else if(operations[i]=="+"){
                 ans.push_back(ans[ans.size()-1]+ans[ans.size()-2]);

            }else{
                ans.push_back(stoi(operations[i]));
            }
        }
      //  return ans[0];
      int sum = accumulate(ans.begin(), ans.end(), 0);
      return sum;
    }
};