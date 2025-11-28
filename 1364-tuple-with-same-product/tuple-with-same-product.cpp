class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        //  int cnt=0;
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int product=nums[i]*nums[j];
                cnt+= 8*mp[product];
                // abcd ke total 8 uique permu bn skte h
                mp[product]++;

            }
        }
        // agr product me do 20 h
        // mtlb a*b = c*d
       
        // for(auto &it:mp) cnt++;
        return cnt;
    }
};