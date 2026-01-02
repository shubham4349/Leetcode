class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int size=target.size();
        vector<string> ans;
        // given- 1 se n
        // sirf push- item kept
        // push,pop-> item removed
        set<int> st(target.begin(),target.end());
        for(int i=1; i<=n; i++){
            if(st.find(i)!=st.end()){ // agar set me h to rkho
                 ans.push_back("Push");
            } else{ // mat rkho
                    if(i>target[size-1]) break; // exmpl3
                    else{
                        ans.push_back("Push");
                        ans.push_back("Pop");
                    }
            }
        }
        return ans;
    }
};