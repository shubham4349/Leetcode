#define ll long long
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
           int r=matrix.size();
           int c=matrix[0].size();

           // negative cnt kr
           // if neg cnt is even-> to sare lements ko tum +ve kr skte ho
           // else 1 element bchega hi bchega-> and we want ki jo minm element ho whi bche so that sum arge rhe
           int negCnt=0;
           ll sum=0;
           ll minm=LLONG_MAX;
           for(int i=0;i<r;i++){
             for(int j=0; j<c; j++){
                if(matrix[i][j]<0) negCnt++;
                 sum+=abs(matrix[i][j]);
                 minm=min(minm,(ll)abs(matrix[i][j]));
             }
           }
           if(negCnt%2==0) return sum;
           return sum-minm+(-minm);
           // -minm-> sum me se abs val hatane ke liye
           // dusra minm-> jo sum me actual negative hoga
    }
};