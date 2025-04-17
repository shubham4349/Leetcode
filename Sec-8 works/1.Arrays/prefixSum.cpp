// prefix[i]= sunm of all emlements from 0th index to ith index
// prefix[i]= prefix[i-1]+ arr[i]

// example
// arr1=[-3,-2,-10,5,8,6]
// prefixSummedArray= [-3,-5, -15, -10, -2, 4]

// suffix[i]= sum of all elements from ith index to last index
// suffix[i]= suffix[i+1] +arr[i]


#include <iostream>
using namespace std;

int suffixSum(int arr[], int size){
    int suffixArray[size];
    suffixArray[size-1]= arr[size-1];

    for(int i = size-2; i>=0; i--){
        suffixArray[i]= suffixArray[i+1] +arr[i];
    }
    cout<<endl;
    cout << "Displaying suffix array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout <<  suffixArray[i] << ",";
    }

}
int prefixSum(int arr[], int size){
    int prefixArray[size];
    prefixArray[0]= arr[0];

    for(int i = 1; i<size; i++){
        prefixArray[i]= prefixArray[i-1] +arr[i];
    }
    cout<<endl;
    cout << "Displaying prefix array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout <<  prefixArray[i] << ",";
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

    prefixSum(arr, size);
    suffixSum(arr, size);
    
}

