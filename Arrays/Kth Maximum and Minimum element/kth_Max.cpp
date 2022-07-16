#include <iostream>
#include <algorithm> 
using namespace std;

int kthMin(int arr[], int size ,int k)
{
    sort(arr,arr+size);
    return arr[size-k];

}
int main()
{
    int arr[8] = {1,2,17,8,9,6,4,5};
    int k = 3;
    int maxi = kthMin(arr,8,k);
    cout<<k<<"th maximum of the given array is "<<maxi<<endl;
    return 0;
}