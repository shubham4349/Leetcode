class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n= nums.size();
        vector<int> ans;
        // repeating part:
        unordered_map<int,int> count;
        int repeated;
        for(int i =0; i<n; i++){
            count[nums[i]]++;
            if(count[nums[i]]==2) {
                repeated = nums[i];
                ans.push_back(repeated);
            }
        }

        // missing part: 
        int actual_sum=0;
        for(int i =1; i<=n; i++){
            actual_sum += i;
        }
        int currsum=0;
        for(int i =0; i<n; i++){
            currsum+= nums[i]; 
        }
        currsum -=repeated; 
        
        int missing = actual_sum-currsum;
        ans.push_back(missing);

        return ans;


    }
};