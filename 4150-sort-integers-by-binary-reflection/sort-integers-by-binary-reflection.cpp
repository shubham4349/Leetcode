class Solution {
public:
    int binRev(int num){
        string s="";
        while(num>0){
          int digit=num%2;
          s+=to_string(digit);
          num/=2;
        }
        int ans=0;
        reverse(s.begin(),s.end());// accd to question
        reverse(s.begin(),s.end());// to change it to decimal
        for(int i=0; i<s.size(); i++){
            ans=ans*2+(s[i]-'0');
        }
        // while(s>0){
            
        // }
        return ans;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        
        int n=nums.size();
        vector<pair<int,int>> p;

        for(int i=0; i<n; i++){
            p.push_back({binRev(nums[i]),nums[i]});
        }
        sort(p.begin(),p.end());
        vector<int> ans;
        for(auto &x: p){
            ans.push_back(x.second);
        }
        return ans;
    }
};