#include<iostream>
using namespace std;

  int transposeMatrix(int matrix[rows][cols], int rows,int  cols){

  }
    int main(){
        int rows, cols;
        cout<<"Enter the number of rows: ";
        cin>>rows;
        cout<<"enter the number of cols:";
        cin>>cols;
    
        int matrix[rows][cols];
        cout<<"Enter elements for matrix: ";
        for(int i = 0 ; i<rows; i++){
            for(int j = 0 ; j< cols; j++){
                cin>>matrix[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        for(int i = 0 ; i<rows; i++){
            for(int j = 0 ; j< cols; j++){
                cout<<matrix[i][j]<<",";
            }
            cout<<endl;
        }
        transposeMatrix(matrix, rows, cols);
return 0;
}