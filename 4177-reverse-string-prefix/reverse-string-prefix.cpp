class Solution {
public:
    string reversePrefix(string s, int k) {
        
        string temp="";
        for(int i=0; i<s.size(); i++){
            temp+=s[i];
            if(i==k-1){
                reverse(temp.begin(),temp.end());
                s.replace(0,k,temp);
                break;
            }
        }
        return s;
    }
};