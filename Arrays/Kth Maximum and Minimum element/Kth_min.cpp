#include <iostream>
#include <algorithm> 
using namespace std;

int kthMin(int arr[], int size ,int k)
{
    sort(arr,arr+size);
    return arr[k-1];

}
int main()
{
    int arr[8] = {1,2,17,8,9,6,4,5};
    int mini = kthMin(arr,8,3);
    cout<<mini<<endl;
    return 0;
}