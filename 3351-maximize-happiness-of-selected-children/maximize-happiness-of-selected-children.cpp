#define ll long long
#define all(v) (v).begin(),(v).end()
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        ll n=happiness.size();
        // 1 bar me 1 chil selet kr-> k bar me k children
        // if val>0 val--
        sort(all(happiness),greater<int>());
        if(k==1) return happiness[0];

        // k=1 -> happ[0]
        // k==2-> happ[0]+(happ[1]-1);
        // k==3-> happ[0]+( happ[1]-1)+happ[2]-2
        // k==4-> happ[0]+happ[1]-1+happ[2]-2+happ[3]-3
        ll sum=0;
        ll cnt=0;
        int i=0;
        while(cnt!=k){
            if(happiness[i]-i>0)  sum+=(happiness[i]-i);
            cnt++;
            i++;
        }
        return sum;
        

    }
};