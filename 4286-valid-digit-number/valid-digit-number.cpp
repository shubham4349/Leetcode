class Solution {
public:
    bool validDigit(int n, int x) {
        string num=to_string(n);
        char ch=x+'0';
        if(num.find(ch)!=string::npos){ // x agar string me h to
            if(num[0]!=ch) return true;
            else return false;
        }
        return false;
    }
};