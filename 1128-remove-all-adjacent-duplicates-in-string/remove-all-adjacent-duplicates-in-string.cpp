#define all(v) (v).begin(), (v).end()
class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char> st;
        // agar ch==st.top to use remove kro
        for(int i=0; i<n; i++){
             if(!st.empty() and s[i]==st.top()){
                st.pop(); // top elemnt remove krdiya coz duplicate
             } else st.push(s[i]); 
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(all(ans));
        return ans;
    }
};