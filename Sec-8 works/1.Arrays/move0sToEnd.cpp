#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 9, 0, 7, 8, 0, 0, 0, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (arr[j] != 0)
    //             {
    //                 int temp = arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = temp;
    //                 break;
    //                 //    j++;
    //             }
    //         }
    //     }
    // }

    int idx = 0;
    for(int i = 0 ; i<n; i++){
        // if(arr[i]==0){
           // int idx= i+1;
            if(arr[i]!=0){
                int temp = arr[i];
                    arr[i] = arr[idx];
                    arr[idx] = temp;
                    idx++;  

                   // break;
            }
            // else{
            //     idx++;
            // }
        // }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}