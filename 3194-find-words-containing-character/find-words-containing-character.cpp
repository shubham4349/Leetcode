class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        
        int n= words.size();
        vector<int> ans;
        // contains in java == count in cpp 

        for(int i =0; i<n; i++){
            if(words[i].contains(x)) ans.push_back(i);
        }
        return ans;
    }
};