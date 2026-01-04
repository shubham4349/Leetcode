class Solution {
public:
    string largestEven(string s) {
        while(!s.empty() and s.back()=='1') s.pop_back();
        return s;
    }
};