#include<iostream>
using namespace std;
bool isSorted(int arr[],int n  ){

    for(int i = 0 ; i<n-1; i++){
        if(arr[i+1]<arr[i]){
            return false;
        }
    }
    return true;
}
int main(){

    int arr[]= {8,10,15,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool result= isSorted(arr,n);
    
    cout << (result ? "Sorted" : "Not Sorted");

return 0;
}