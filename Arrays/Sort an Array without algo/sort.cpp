// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
using namespace std;
void sortZeroOneTwo(int arr[], int size)
{
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    int i = 0;
    while(zero--){
        arr[i] = 0;
        i++;
    }
    while(one--){
        arr[i] = 1;
        i++;
    }
    while(two--){
        arr[i] = 2;
        i++;
    }
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    sortZeroOneTwo(arr,n);

    return 0;
}