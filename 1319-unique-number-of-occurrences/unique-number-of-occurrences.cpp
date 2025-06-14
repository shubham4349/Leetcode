class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n=arr.size();

        unordered_map<int,int> map;

        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        set<int> hello(arr.begin(), arr.end());
        arr.assign(hello.begin(), hello.end());

        vector<int> occur;

        for(int i=0; i<arr.size(); i++){
            int occurence = map[arr[i]];
            occur.push_back(occurence);
        }
        // ab agar ebry elemnt of occur is unique then print true
        unordered_map<int,int> lmao;

        for(int i=0; i<occur.size(); i++){
            lmao[occur[i]]++;
        }
         for(int i=0; i<occur.size(); i++){
            if(lmao[occur[i]]>1) return false;
        }
        return true;



    }
};