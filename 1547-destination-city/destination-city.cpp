class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        // key->val
        // agar val posn pe koi aisa elemnt h jo key me nhi h the return it

        set<string> key;
        for(auto &p:paths){
            string k=p[0];
            key.insert(k);
        }
        for(auto &p:paths){
            string v=p[1];
            if(key.find(v)==key.end()) return v;
        }
        return "";

    }
};