#define pb push_back
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // sort num accd to first digti, then secind digit
        int n=nums.size();
        vector<string> str;
        for(int i=0; i<n; i++){
            str.pb(to_string(nums[i]));
        }
        sort(str.begin(), str.end(), [&](string &a, string &b){
            return a+b>b+a ; 
            // 3 + 30 = 330 bigger
            // 30+ 3  = 303 
            // so here a+b is true
        });
         /// if all elements in vector is 0 return "0";
        if(str[0]=="0") return "0";
        string ans="";
        for(auto s : str) ans+= s;
        return ans;

    }
};