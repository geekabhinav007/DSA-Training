#include <iostream>
using namespace std;

void transpose(int arr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0,k=columns-1; k>j; j++,k--)
        {
            swap(arr[i][j],arr[i][k]);
           
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    transpose(arr, 3, 3);
    return 0;
}