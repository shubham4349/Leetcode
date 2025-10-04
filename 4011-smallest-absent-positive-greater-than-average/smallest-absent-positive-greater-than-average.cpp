class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
             sum+=nums[i];
        }
        double avg=sum/n;
        set<int> st(nums.begin(),nums.end());
        
        int ans=0;
        while(true){
            ans++;
            if(ans>avg and st.find(ans)==st.end()){
                break;
              // return ans;
            }
        }
        return ans;
    }
};