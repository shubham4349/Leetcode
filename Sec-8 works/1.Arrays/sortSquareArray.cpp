#include <iostream>
using namespace std;


// given sorted array[-4,-2,1,3]
// find the squared sorted array without using sorted function

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
    // 2 pointer approach
    int i = 0;
    int j = size - 1;

    int squareArray[size]; // different array of same size
    int k = size - 1;

    while (i <= j)
    {
        int square_i = arr[i] * arr[i];
        int square_j = arr[j] * arr[j];

        if (square_i > square_j)
        {
            squareArray[k] = arr[i] * arr[i]; // agar i*i bada h to use hi dalo naye array me
            i++;
        }
        else
        {
            squareArray[k] = arr[j] * arr[j];
            j--;
        }
        k--;
    }

    cout << endl;
    cout << "Squared Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << squareArray[i] << ",";
    }

    return 0;
}