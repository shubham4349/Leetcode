class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        // q-> kya arr ka last char 1 bit char h?
        int n=bits.size();
        // if(n==1){
        //     if(bits[0]==0) return true;
        //     else return false;
        // }
        // if(bits[n-1]==0){
        //     if(bits[n-2]==1) return false;
        //     else return true;
        // }
        // else return false;
        for(int i=0; i<n-1; i++){
            if(bits[i]==1){
                bits[i]=8;
                bits[i+1]=8;
            }
        }
        return bits[n-1]==0? true:false;
    }
};