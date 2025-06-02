class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n =ratings.size();
        // example
        // ratings =  [1,2,10,10,10,2,1]
        // initially= [1,1,1,1,1,1,1]
        // left2right=[1,2,3,1,1,1,1,1]; -> agar ratings[i] ki val apne left wale ratings se kam h to l2r me uski value badhao.
        // r2l = [1,1,1,1,3,2,1]

        vector<int> L2R(n,1);
        vector<int> R2L(n,1);
       
        for(int i =1; i<n; i++){
            if(ratings[i]>ratings[i-1]){ // agar apne left nebor se bada ho
                L2R[i] = max(L2R[i], L2R[i-1]+1);
            }
        }
        
        for(int i =n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1]){ // agar apne right nebor se bada ho
               R2L[i] = max(R2L[i], R2L[i+1]+1);
            }
        }
        int sum=0;
        // vector<int> final(n);
        // for(int i =0; i<n; i++){
        //      final.push_back(max(L2R[i],R2L[i]));
        // }
        for(int i =0; i<n; i++){
            sum += max(L2R[i],R2L[i]);
        }
        return sum;
    }
};