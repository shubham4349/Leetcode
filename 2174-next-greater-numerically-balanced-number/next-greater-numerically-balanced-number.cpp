class Solution {
public: 
    bool digitOccurence(int n){
        map<int,int> mp;
        while(n>0){
            int digit=n%10;
            mp[digit]++;
            n=n/10;
        }
        for(auto it: mp){
            if(it.first!=it.second) return false;
        }
        return true;

    }
    int nextBeautifulNumber(int n) {
        
        while(true){
            n++;
            bool ans=digitOccurence(n);
            if(ans){
                break;
            }
            
        }
         return n;

    }
};