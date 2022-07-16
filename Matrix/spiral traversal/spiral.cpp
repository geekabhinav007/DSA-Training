#include <iostream>
using namespace std;
// Complexity :- O(n^2)

void spiral(int arr[][4], int rows, int columns)
{
    int total = rows * columns;
    int count = 0;
    int starting_row = 0;
    int ending_row = rows - 1;
    int starting_col = 0;
    int ending_col = columns - 1;
    while (count < total)
    {

        for (int i = starting_col; i <= ending_col; i++)
        {
            if (count < total)
            {
                cout << arr[starting_col][i] << " ";
                count++;
            }
        }
        starting_row++;
        for (int i = starting_row; i <= ending_row; i++)
        {
            if (count < total)
            {
                cout << arr[i][ending_col] << " ";
                count++;
            }
        }
        ending_col--;
        for (int i = ending_col; i >= starting_col; i--)
        {
            if (count < total)
            {
                cout << arr[ending_row][i] << " ";
                count++;
            }
        }
        ending_row--;
        for (int i = ending_row; i >= starting_row; i--)
        {
            if (count < total)
            {
                cout << arr[i][starting_col] << " ";
                count++;
            }
        }
        starting_col++;
    }
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9,10,11,12},
                     {56,78,96,75},
                     {11,14,48,99}};
    spiral(arr, 5, 4);

    return 0;
}