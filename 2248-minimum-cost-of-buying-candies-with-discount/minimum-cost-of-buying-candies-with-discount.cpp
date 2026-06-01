class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // sort
        // pehla candy free uthao, the next do buy kro, similarly aage badho
        // 0,3,6,9-> ye idx skip kro
        sort(cost.begin(),cost.end());
        int n=cost.size();
        if(n==1) return cost[0]; // 1 hi candy h usko buy krliya
        else if(n==2) return cost[0]+cost[1]; // 2 candy h, dono buy kiya
        int ans=0;
        int cnter=0;
        for(int i=n-1; i>=0; i--){
            if(cnter==2){
               cnter=0;
            } else{
                ans+=cost[i];
                cnter++;
            }
        }
        return ans;
    }
};