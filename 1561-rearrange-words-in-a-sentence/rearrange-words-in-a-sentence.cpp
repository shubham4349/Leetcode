class Solution {
public:
    string arrangeWords(string text) {
        // using tuple
        vector<tuple<int,int,string>> nums;
        int origPosn=0;
        for(int i=0; i<text.size(); i++){
            string s="";
            int len=0;
            // origPosn=0;
            while(i<text.size() and text[i]!=' '){
                len++;
                s+=tolower(text[i]);
                i++;
            }
            origPosn++;
            nums.push_back({len,origPosn,s});
        }
        sort(nums.begin(),nums.end());
        string ans="";
        // for(auto &p:nums){
        //      ans+=p.third;
        //      ans+=" ";
        // }
        for(auto &[len,posn,word]:nums){
            ans+=word;
            ans+=" ";
        }
        while(!ans.empty() and ans.back()==' ') ans.pop_back();
        ans[0]=toupper(ans[0]);
        return ans;
    }
};