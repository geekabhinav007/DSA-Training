#include <iostream>
using namespace std;
bool binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (target == arr[mid])
        {
            return true;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}
int main()
{
    int arr[6] = {1, 2, 5, 6, 9, 14};
    if (binarySearch(arr, 6, 14))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    return 0;
}