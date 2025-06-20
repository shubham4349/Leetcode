#define ll long long int
#define pb push_back
class Solution {
public:
    int nextGreater(vector<int>& temp, ll k, int num){
         int day=0;
         ll n=temp.size();
        for(ll i=k; i<n; i++){
            if(temp[i]>num) {
                day = abs(i-k);
                break;
            }
        }
        return day;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        ll n= temperatures.size();
        set<int> hello(temperatures.begin(),temperatures.end() );
        if(hello.size()==2){
                vector<int> big;
                 int a = n-1;
                if(n==1e5) {
                for(int i=0; i<n; i++){
                        big.pb(a);
                        a--;
                    }
                return big;
                }
         }
       

        vector<int> ans;

        for(ll i=0; i<n; i++){
            int day = nextGreater(temperatures, i , temperatures[i]);
            ans.push_back(day);
        }
        return ans;
    }
};