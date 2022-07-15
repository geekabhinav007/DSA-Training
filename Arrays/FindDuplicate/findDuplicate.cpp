
/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2

Example 2:

Input: nums = [3,1,3,4,2]
Output: 3

Constraints:

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two times.
*/

#include<iostream>
using namespace std;
int findDuplicate(int arr[], int n){
    int sumOf_array_element = 0;
    for(int i = 0; i<n ; i++){
        sumOf_array_element  = sumOf_array_element + arr[i];
    }
    int sumOf_N_Natural_No = ((n-1)*(n))/2;
    return sumOf_array_element - sumOf_N_Natural_No;
}
int main(){
    int nums[5] = {3,1,3,4,2};
    int  duplicateElement = findDuplicate(nums,5);
    cout<<"The Duplicate element in the array is "<<duplicateElement<<endl;
    return 0;
}