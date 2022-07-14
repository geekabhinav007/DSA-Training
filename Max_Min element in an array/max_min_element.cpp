#include<iostream>
using namespace std;

/* we can use a function that is predefined with name => max() , min()
to find out maximum and minimum value

maximum = INT32_min; // -2147483647-1
minimum = INT32_max; // 2147483647
while(i<size){
    maximum = max(maximum,arr[i]);
    minimum = min(minimum,arr[i]);
    i++;
}
*/
 
int maxElementOfArray(int arr[], int size){
    int i = 0;
    int max = INT32_MIN;
    while(i<size){
        if(arr[i]>max){
            max = arr[i]; 
        }
        i++;
    }
    return max;

}
int minElementOfArray(int arr[], int size){
    int i = 0;
    int min = INT32_MAX;
    while(i<size){
        if(arr[i]<min){
            min = arr[i]; 
        }
        i++;
    }
    return min;

}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    cout<<"Enter the elements of array ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = maxElementOfArray(arr,n);
    cout<<"The maximum Element of the given array is "<<max<<endl;
    int min = minElementOfArray(arr,n);
    cout<<"The minimum Element of the given array is "<<min<<endl;
    return 0;
}