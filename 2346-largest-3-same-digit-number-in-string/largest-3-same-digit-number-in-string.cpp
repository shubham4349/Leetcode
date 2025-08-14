class Solution {
public:
    string largestGoodInteger(string num) {
        
        int n=num.length();
        string ans="";
        for(int i=0; i<n-2; i++){
            set<char> st;
            string str="";
            for(int j=i; j<i+3; j++){
                st.insert(num[j]);
                str+=num[j];
            }
            if(st.size()==1) {
                //number = stoi(str);
                ans = max(str,ans);
            }
            st.clear();
        }
        return ans;
    }
};