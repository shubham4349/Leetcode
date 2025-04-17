#include<iostream>
using namespace std;


    // int suffixProduct(int arr[], int size){
    //     int suffixArray[size];
    //     suffixArray[size-1]= arr[size-1];
    
    //     for(int i = size-2; i>=0; i--){
    //         suffixArray[i]= suffixArray[i+1] *arr[i];
    //     }
    //     cout<<endl;
    //     cout << "Displaying suffix array: " << endl;
    
    //     for (int i = 0; i < size; i++)
    //     {
    //         cout <<  suffixArray[i] << ",";
    //     }
    
    // }
   // void boolean
   void tempMatrix(int temp[][], int i , int j){
    int rows= temp.size();
    int cols= temp[0].size();
  //  int temp[rows][cols];
    
    // changing all ith row elements to 1 
    for(int k = 0 ; k<rows; k++){
        temp[i][k]= 1;
    }
    for(int k = 0 ; k<cols; k++){
        temp[k][j]= 1;
    } int rows= temp.size();
    int cols= temp[0].size();
  //  int temp[rows][cols];
    
    // changing all ith row elements to 1 
    for(int k = 0 ; k<rows; k++){
        temp[i][k]= 1;
    }
    for(int k = 0 ; k<cols; k++){
        temp[k][j]= 1;
    }
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
    for(int i = 0 ; i< rows; i++){
        for(int j = 0 ;j< cols; j++){
            if(matrix[i][j]==1){
                tempMatrix( matrix, i, j);
            }
        }
    }
     
return 0;
}