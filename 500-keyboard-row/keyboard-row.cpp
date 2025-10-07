class Solution {
public:
    bool firstRowCheck(string s1, string first){
        for(char ch: s1){
            if(first.find(ch)==string::npos) return false;
        }
        return true;
    }
     bool secondRowCheck(string s1, string second){
        for(char ch: s1){
            if(second.find(ch)==string::npos) return false;
        }
        return true;
    }
     bool thirdRowCheck(string s1, string third){
        for(char ch: s1){
            if(third.find(ch)==string::npos) return false;
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        
        string first="qwertyuiop";
        string second="asdfghjkl";
        string third="zxcvbnm";

        int n=words.size();
        vector<string> ans;

        for(int i=0; i<n; i++){
            string org=words[i];
            string s=words[i];
            transform(s.begin(), s.end(), s.begin(), ::tolower); // jo tolower method h vo characters me lagta h, agar pure string ko ek bar me transform krna h so use transform method
            bool checkone=firstRowCheck(s,first);
           
            bool checktwo=secondRowCheck(s,second);
            bool checkthree=thirdRowCheck(s,third);

             if(checkone==true) ans.push_back(org);
             else if(checktwo==true) ans.push_back(org);
             else if(checkthree==true) ans.push_back(org);

        }
        return ans;
    }
};