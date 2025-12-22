class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        // set<char> st(s.begin(),s.end());
        // if(s.size()==1) return 0; // eg2
        int n=s.size();

        // set<int> stc(cost.begin(),cost.end());
        // if(stc.size()==1 and s.size()!=1 ) return cost[0];

        // first total cost find kr
        // then ek map bana->  s[i]->cost[i] se
        // aur vo char chod de jiska cost maxm ho
        // eg-1
        // a->8, b->3, c-10 total= 21
         map<char,long long> mp;
         long long totalCost=0;
         for(int i=0; i<n;i++){
            totalCost+=cost[i];
            mp[s[i]]+=cost[i];
         }
        //  long long maxCost=0;
        //  for(auto &[ch,cost]:mp){
        //     maxCost=max(maxCost,cost);
        //  }
        //    long long ans=0;
        //  for(auto &[ch,cost]:mp){
        //     if(cost!=maxCost) ans+=cost;
        //  }
        long long ans=LLONG_MAX;
          for(auto &[ch,cost]:mp){
             long long remCost=totalCost-cost; // cost of all char except ch 
             // ye tera minm deletion h
             ans=min(ans,remCost);
         }
         return ans;

    }
};