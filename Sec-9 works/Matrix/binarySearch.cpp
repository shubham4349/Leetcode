#include<iostream>
#include<vector>
using namespace std;
   // sorted matrix pe hi kam krega
   
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int row = 0, col = n - 1;

    while (row < m && col >= 0) {

    if (matrix[row][col] == target) return true;
    else if (matrix[row][col] > target) col--;
    else row++;
    }
    return false; // Error: No check for empty matrix
    }

int main(){
      
}