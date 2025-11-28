class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        // mthd-1 just reverse each row
        // mthd-2 use 2 ptr
        int r=image.size();
        int c=image[0].size();

        for(int i=0; i<r; i++){
            int j=0;
            int k=c-1;
            while(j<=k){
                swap(image[i][j],image[i][k]);
                j++;k--;
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(image[i][j]==1) image[i][j]=0;
                else image[i][j]=1;
            }
        }
        return image;
    }
};