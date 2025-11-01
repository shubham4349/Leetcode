class Solution {
public:
    string reverseWords(string s) {
       int n=s.length();
       vector<string> nums;
       for(int i=0; i<n; i++){
        string hey="";
           while(i<n and s[i]!=' ') {
               hey+=s[i];
               i++;
           }
           if(hey!="") nums.push_back(hey);
       }
       reverse(nums.begin(),nums.end());
       string ans="";
       for(int i=0; i<nums.size(); i++){
            ans+=nums[i];
            if(i!=nums.size()-1) ans+=' ';
       }
       return ans;
    }
};