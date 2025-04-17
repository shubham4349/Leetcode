#include<iostream>
using namespace std;
int main(){

   int matrix[3][3] = {{23 ,45 ,93},
                    {28,39,14},
                    {25,84,13}};


    int maxmElement = INT32_MIN; // ya to matrix[0][0]

    for(int i = 0 ; i<3; i++){
        for(int j = 0 ; j<3; j++){
             if(matrix[i][j]>maxmElement) maxmElement = matrix[i][j];
        }
    }
    cout<<"Maximum element is: "<<maxmElement;
return 0;
}