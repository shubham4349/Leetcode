class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>> nums;
        // int x=s[0];
        for(int i=0; i<s.size(); i++){
            string st="";
            int num=0;
            while(i<s.size() and s[i]!=' '){
                st+=s[i];
                i++;
            }
            num=st[st.size()-1]-'0';
            st[st.size()-1]=' ';
             nums.push_back({num,st});
        }
        sort(nums.begin(),nums.end());
        string ans;
       
        for(auto &[key,val]:nums){
            ans+=val;
              ans+="";
        }
        // rmeoving last space
        while(!ans.empty() and ans.back()==' ') ans.pop_back();
        return ans;
    }
};