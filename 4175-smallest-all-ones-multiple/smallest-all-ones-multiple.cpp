#define ll long long
class Solution {
public:
    int minAllOneMultiple(int k) {
        // similiar to lc 1015
        if(k==1) return 1;
        if(k%2==0 or k%5==0) return -1;
        
        ll rem=0; // remiander=0;
        for(ll i=1; i<=k;i++){ // len hmesa <=k hi rhegi
        // integer overflow
        //   rem=(rem*10)+1; 
        //   if(rem%k==0) return i;
        rem=((rem*10)+1)%k; // 1,11,111...
        if(rem==0) return i;
        }
        return -1;

    }
};