class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        int n = digits.size();

         // brute force
        vector<int> ans;
        int num = 0;
         for(int i =0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k =0; k<n; k++){
                    if(i==j or i==k or j==k) continue;

                    num = digits[i]*100+ digits[j]*10+ digits[k]*1; // kyuki 3-digit chahiye.
                    if(num>=100 and num%2==0)  ans.push_back(num);
                }
            }
         }
         sort(ans.begin(), ans.end());
         set<int> s(ans.begin(), ans.end());
         vector<int> output(s.begin(), s.end());
         return output;
    }
};