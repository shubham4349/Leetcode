class Solution {
public:
   void func(vector<vector<int>>& image, int i, int j, int orig,int color){
            int r=image.size();
            int c=image[0].size();
            if(0>i or i>=r or 0>j or j>=c){ // out of bound
            return ;
            }
            if(image[i][j]==orig){
                image[i][j]=color; // change the color
                func(image,i-1,j,orig,color); // top
                 func(image,i+1,j,orig,color);// bottom
                  func(image,i,j-1,orig,color);// left
                   func(image,i,j+1,orig,color);// right

            }

    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // starting pixel ke jaisa jo adjacent ka color ho unhe bhi clor kro
        // image[sr][sc]=color;
        // ab iske sare neighbour ke liye ek function call kr
        if(image[sr][sc]==color) return image; // no change
        func(image,sr,sc,image[sr][sc],color);
        return image;
        
    }
};