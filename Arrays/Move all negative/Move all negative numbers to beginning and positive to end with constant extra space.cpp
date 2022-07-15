#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void move(int arr[], int size)
{
    // Complexity o(n*log(n))
    sort(arr, arr + size);
    printArray(arr, size);
}
// 2nd Mehod for moving all negative to one side of the array.
void move2(int arr[], int n)
{
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
    move(arr,n);

    return 0;
}
