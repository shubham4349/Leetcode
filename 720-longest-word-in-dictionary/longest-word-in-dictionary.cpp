class Solution {
public:
    string longestWord(vector<string>& words) {
        // agar kisi woorld ke sare prefix set me h to the vo word answer hoga
        // jese apple h-> a,ap,app,appl prefix me ho then hi usko cnt kro
        set<string> wordSet(words.begin(),words.end());
        set<string> ans;
         for(auto& w:words){
            string pre="";
            for(int i=0; i<=w.size()-1; i++){
                pre+=w[i];
                if(wordSet.find(pre)!=wordSet.end()){
                    ans.insert(w); // inn words ke prefixes h set me
                } else {
                    ans.erase(w); // koi prefix agar nhi h to pop krdo
                    break;
                }
            }
         }
         vector<string> res(ans.begin(),ans.end());
         int maxmSize=INT_MIN;
         for(auto& r:res){
            maxmSize=max(maxmSize,(int)r.size());
         }
         string s="";
         for(auto& r:res){
            if(r.size()==maxmSize){
                s=r;
                break;
            }
         }
        return s;

    }
};