/*
Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

Note: Return -1 if you can't reach the end of the array.


Example 1:

Input:
N = 11
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3
Explanation:
First jump from 1st element to 2nd
element with value 3. Now, from here
we jump to 5th element with value 9,
and from here we will jump to the last.
Example 2:

Input :
N = 6
arr = {1, 4, 3, 2, 6, 7}
Output: 2
Explanation:
First we jump from the 1st to 2nd element
and then jump to the last element.

Your task:
You don't need to read input or print anything. Your task is to complete function minJumps() which takes the array arr and it's size N as input parameters and returns the minimum number of jumps. If not possible return -1.


Expected Time Complexity: O(N)
Expected Space Complexity: O(1)

1, 3, 6, 3, 2,
                  3, 6, 8, 9, 5 
Constraints:
1 ≤ N ≤ 107
0 ≤ arri ≤ 107
*/

// Brute Force approach
#include <bits/stdc++.h>
using namespace std;

int jump(int arr[], int size)
{
    int count = 0;
    int index;
    int step;
    for (int i = 0; i < size; i++)
    {
        step = arr[i];

        int maxi = INT32_MIN;
        if (step + i > size)
        {
            break;
        }
        for (int j = i + 1; j < step + i + 1; j++)
        {
            if (arr[j] > maxi)
            {
                maxi = arr[j];
                index = j;
            }
        }
        count++;
        i = index;
    }
    return count;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter the elements of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int Min_jump = jump(arr, n);
    cout << Min_jump << endl;

    return 0;
}
