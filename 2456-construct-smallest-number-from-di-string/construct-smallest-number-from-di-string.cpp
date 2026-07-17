class Solution {
public:
    string smallestNumber(string pattern) {
       
        // stack soln
        // 1 pop  1
        // 2 pop  12
        // 3 pop  123 
        // 4 do nothing 123 , 4
        // 5 pop  54 
        // 12354 
        // I pe pop, D pe do noting
        int n=pattern.size();
        stack<int> st;
        string ans="";
        for(int i=0; i<=n; i++){
            st.push(i+1);

            if(pattern[i]=='I' or i==n){ 
                // i==n isliye coz last me agar I nhi aaya to push krne ke liye
                while(!st.empty()){
                     ans+=(st.top()+'0'); // pehle 1 jayega
                     st.pop();
                }
            }
        }
        return ans;

    }
};