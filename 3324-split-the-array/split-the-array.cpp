class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        
        int n=nums.size();

        if(n%2==1) return false;

        unordered_map<int,int> count;

        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            if(count[nums[i]]>2) return false;
        }
        return true;
    }
};