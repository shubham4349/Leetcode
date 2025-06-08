class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n= arr.size();
        unordered_set<int> temp(arr.begin(), arr.end());
        
        vector<int> pseudo;
        for(int i =1; i<=1e4; i++){
             if(temp.count(i) ==0) { // agar element nhi h to
                 pseudo.push_back(i);
             } 
        }
        return pseudo[k-1];

    }
};