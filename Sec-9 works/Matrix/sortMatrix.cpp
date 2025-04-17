/* sort a 2d matrix
    approach:
    convert it into a 1d- then use bubble sort to sort
    then once again convert it into a 2d matrix
*/
#include <iostream>

using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "enter the number of cols:";
    cin >> cols;

    int matrix[rows][cols];
    cout << "Enter elements for matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
    // printing user matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << ",";
        }
        cout << endl;
    }
    // converting 2d matrix into a 1d array
    int size = rows * cols; // size of 1d array 
    int temp[size];
    int idx = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp[idx++] = matrix[i][j];
            // idx++;
        }
    }
    // bubble sort se sort kr rhe 1d array
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                int tempo = temp[j + 1];
                temp[j + 1] = temp[j];
                temp[j] = tempo;
            }
        }
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << temp[i] << "," ;
    // }

    // converting 1d to 2d
    idx = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = temp[idx++];
            // idx++;
        }
    }
    // printing the sorted matrix
    cout << endl;
    cout << "Sorted matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
// binary search in 2d matrix