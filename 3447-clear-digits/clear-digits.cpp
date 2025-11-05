class Solution {
public:
    string clearDigits(string s) {
        
        // approach->2;
        // using string stack like mthods
        string ans;
        for(char ch:s){
            if(isdigit(ch)) ans.pop_back(); // sbse latest dala hua non-digit delete
            else ans.push_back(ch);
        }
        return ans;
    }
};