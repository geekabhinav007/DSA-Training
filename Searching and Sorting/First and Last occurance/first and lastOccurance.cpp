/*
First and last occurrences of x

Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5.


Example 2:

Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  6 6

Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function find() that takes array arr, integer n and integer x as parameters and returns the required answer.
Note: If the number x is not found in the array just return both index as -1.



Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1).



Constraints:
1 ≤ N ≤ 107
*/
#include <iostream>
using namespace std;
int firstOccurance(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
         
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if(arr[mid] < target)
        {
            start = mid + 1;
        }
    
    }
    return ans;
}
int lastOccurance(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
         
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if(arr[mid] < target)
        {
            start = mid + 1;
        }
    
    }
    return ans;
}
int main()
{
    int arr[9] = {1, 3, 5, 5, 5, 5, 7, 123, 125};
    int firstOccuranceOfElement = firstOccurance(arr, 9, 5);
    int lastOccuranceOfElement = lastOccurance(arr, 9, 5);
    cout << firstOccuranceOfElement << endl;
    cout << lastOccuranceOfElement << endl;
    int TotalNoOfOccurance = lastOccuranceOfElement - firstOccuranceOfElement + 1;
    cout<<TotalNoOfOccurance<<endl;
    return 0;
}