class Solution {
public:
    string removeDuplicates(string s, int k) {
         int n=s.size();
       
        stack<pair<char,int>> st;
        // stack ke elements pair h
        // p.first-> ch, p.second->int
        for(int i=0; i<n; i++){
            if(!st.empty() and st.top().first==s[i]){
                st.top().second++;
                if(st.top().second==k) st.pop();
            }else{
                st.push({s[i],1}); // cnt==1 initially
            }
        }
        string ans="";
        while(!st.empty()){
            while(st.top().second--){ //-> append(number,char)
                ans+=st.top().first; // pair.first
            }
            // ans.append(st.top().second,st.top().first);
            st.pop();
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};