// leetcode 238
#include<iostream>
using namespace std;
int prefixProduct(int arr[], int size){
    int prefixArray[size];
    prefixArray[0]= arr[0];

    for(int i = 1; i<size; i++){
        prefixArray[i]= prefixArray[i-1] *arr[i];
    }
    cout<<endl;
    cout << "Displaying prefix array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout <<  prefixArray[i] << ",";
    }
}
int suffixProduct(int arr[], int size){
    int suffixArray[size];
    suffixArray[size-1]= arr[size-1];

    for(int i = size-2; i>=0; i--){
        suffixArray[i]= suffixArray[i+1] *arr[i];
    }
    cout<<endl;
    cout << "Displaying suffix array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout <<  suffixArray[i] << ",";
    }

}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Displaying array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    prefixProduct(arr, size);
    suffixProduct(arr,size);

    //hold

}