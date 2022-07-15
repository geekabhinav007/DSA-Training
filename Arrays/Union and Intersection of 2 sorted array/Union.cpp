#include <iostream>
using namespace std;
int unionOfArrays(int arr1[], int n, int arr2[], int m)
{
    int arr[n + m];
    int count = 0;
    int i = 0, j = 0;
    for (; i < n && j < m;)
    {
        if (arr1[i] < arr2[j])
        {
            
            arr[count] = arr1[i];
            i++;
            count++;
        }
        else if (arr1[i] == arr2[j])
        {
            arr[count] = arr1[i];
            i++;
            j++;
            count++;
        }
        else if (arr1[i] > arr2[j])
        {
            arr[count] = arr2[j];
            j++;
            count++;
        }
        
    }
    while(n>i){
        arr[count] = arr1[i];
        i++;
        count++;

    }
    while(m>j){
        arr[count] = arr2[j];
        i++;
        count++;

    }
    for(int i = 0 ; i<count ; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return count;
}
int main()
{
    int arr1[4] = {1, 2, 8, 25};
    int arr2[4] = {2, 5, 6, 8};
    int noOfElement = unionOfArrays(arr1, 4, arr2, 4);
    cout << "The no of element in union of two sorted array is " << noOfElement << endl;
    return 0;
}
// 1,2,3,4,6,8
/*
 {1, 2, 8, 25} i
 {2, 5, 6, 8} j
 i = 0; j = 0
 arr = [1];
 i = 1 j = 0
 arr = [1,2]
 i=2 j = 1
 arr = [1,2,5]
*/