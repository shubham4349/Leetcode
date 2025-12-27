class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a!=b) return (a.size()>b.size()?a.size():b.size());
        else return -1; // a==b
    }
};