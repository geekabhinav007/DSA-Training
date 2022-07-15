#include <iostream>
using namespace std;
void circularRotation(int arr[], int size)
{
    // 2,3,4,5,9,7
    // 7,2,3,4,5,9
    for (int i = size - 1; i > 0; i--)
    {
        int temp = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = temp;
        //swap(arr[i], arr[i - 1]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
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
    circularRotation(arr, n);
    return 0;
}
