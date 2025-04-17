#include<iostream>
#include<vector>
using namespace std;

bool checkTarget(int arr[],int n, int target){
    int start = arr[0];
    int end = n-1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid]==target) {
            cout<<"Target found at index "<<mid<<endl;
           // return true;
        }
        else if(arr[mid]>target) {
            end = mid-1;

        }
        else{
            start  = mid+1;
        }

    }
    cout<<"Target not found";
  
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in sorted order: "<<endl;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Displaying array";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cin>>target;
    
    cout<<"Checking target..."<<endl;
    checkTarget(arr,n, target);

return 0;
}
