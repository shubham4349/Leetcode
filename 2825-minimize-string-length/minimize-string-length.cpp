#define all(v) (v).begin(),(v).end()
class Solution {
public:
    int minimizedStringLength(string s) {
        // sare unique ch hi cnt kro
        set<char> st(all(s));
        return st.size();
    }
};