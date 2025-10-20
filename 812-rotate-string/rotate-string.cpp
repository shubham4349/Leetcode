class Solution {
public:
    bool rotateString(string s, string goal) {
        int k=s.size();
        // if(s==goal) return true;
        for(int i=1; i<=k; i++){
            std::rotate(s.begin(),s.end()-1, s.end());
            if(s==goal) return true;
        }
        return false;
    }
};