// Print all the subarrays of an array
#include <iostream>
using namespace std;
int main()
{
    int l = 0;
    int m = 0;
    int maxi = INT32_MIN;
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;
    cout<<"Printing all possible subarrays "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                cout << arr[k] << " ";
                sum = sum + arr[k];
                
            }
            if (sum > maxi)
            {
                l = i;
                m = j;
                maxi = sum;
            }
            cout << endl;
        }
    }
    cout <<"Largest Sum of Contiguous Subarray is "<<maxi << endl;
    cout<<"Largest Sum Contiguous Subarray is "; 
    for(int i = l ; i<m ; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}