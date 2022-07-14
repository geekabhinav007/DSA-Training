#include <iostream>
using namespace std;
bool ispalindrom(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (j > i)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
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
    if (ispalindrom(arr, n))
    {
        cout << "The array is palindrom" << endl;
    }
    else
    {
        cout << "This array is not a palindrom" << endl;
    }
    return 0;
}
