#include <iostream>
using namespace std;

bool search(int arr[][3], int target, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][3] = {{1,2,3},{3,4,8}};
    int find = search(arr,8,3,3); 
    cout<<find<<endl;
    return 0;
}
// Time COMPLEXITY = O(n^2)