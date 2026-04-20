class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int maxm=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(colors[i]!=colors[j]){
                int dist=abs(i-j);
                maxm=max(maxm,dist);
                }
              
            }
        }
        return maxm;
    }
};