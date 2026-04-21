class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string evens1="",odds1="";
        string evens2="",odds2="";

        for(int i=0; i<s1.size();i++){
            if(i%2==0) evens1+=s1[i];
            else odds1+=s1[i];
        }
         sort(evens1.begin(),evens1.end());
        sort(odds1.begin(),odds1.end());
        for(int i=0; i<s2.size();i++){
            if(i%2==0) evens2+=s2[i];
            else odds2+=s2[i];
        }
        sort(evens2.begin(),evens2.end());
        sort(odds2.begin(),odds2.end());

        if(evens1==evens2 and odds1==odds2) return true;
        return false;

    }
};