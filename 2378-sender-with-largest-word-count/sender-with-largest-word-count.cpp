class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> mp;

        vector<int> word_count;
        for(auto& msg:messages){
            int cnt=0; // space cnt h
            for(auto& ch:msg){
               if(ch==' ') cnt++;
            }
            int noOfwords=cnt+1; // 1 space pe 2 words and similar
            word_count.push_back(noOfwords);
        }
        for(int i=0; i<senders.size(); i++){
            mp[senders[i]]+=word_count[i]; //alice+=2, then +=3, total-> 5
        }
        vector<string> ans;
        int maxm=0;
        for(auto& it:mp){
           maxm=max(maxm,it.second);
        }
        for(auto& [name,cnt]:mp){
            if(cnt==maxm) ans.push_back(name);
        }
        sort(ans.begin(),ans.end(),greater<string>()); // lexically bada
        return ans[0];

    }
};