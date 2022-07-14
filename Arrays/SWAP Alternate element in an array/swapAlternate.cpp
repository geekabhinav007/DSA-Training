/*
output and input


Enter the size of array 4
Enter the elements of array [4 5 6 9]
Output Array
[5 4 9 6] 

Enter the size of array 7
Enter the elements of array [4 5 9 7 1 3 4]

Output Array
[5 4 7 9 3 1 4] 

*/
#include <iostream>
using namespace std;
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
    cout<<endl;
    for (int i = 0; i < n-1; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    cout<<"Output Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
