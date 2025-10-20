class Solution {
public:
    bool rotateString(string s, string goal) {
        // 
        if(s.size()!=goal.size()) return false;

        string newStr= s+s;
        if(newStr.find(goal)!=string::npos){ // found
              return true;
        }
        return false;
    }
};