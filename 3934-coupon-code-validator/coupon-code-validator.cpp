class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        
        set<string> s;
        s.insert("electronics");
        s.insert("grocery");
        s.insert("pharmacy");
        s.insert("restaurant");

        vector<pair<string,string>> vp;
        for(int i=0; i<code.size(); i++){
            string cde=code[i];
            string bl=businessLine[i];
            bool status=isActive[i];
            for(int j=0; j<cde.size(); j++){
                if(cde[j]=='_') continue;
                else if(isalnum(cde[j])) continue;
                else cde="";
            }

            if(cde!="" && s.find(bl)!=s.end() && status){
                vp.push_back({bl,cde});
            }
        }
        sort(vp.begin(),vp.end());
        vector<string> ans;
        for(auto &[x,y]:vp){
            ans.push_back(y);
        }
        return ans;
    }
};